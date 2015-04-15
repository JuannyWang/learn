#ifndef __Marshellable_H
#define __Marshellable_H

class Marshallable 
{
public:
	virtual ~Marshallable(){}

	virtual int size() const = 0;

	// ����������ֽ���
	virtual int marshall(void* out, int outSize) const = 0;

	// �ɹ����ط�0,���򷵻�0
	virtual bool unmarshall(const void* in, int inSize) = 0;
};



#endif // __Marshellable_H