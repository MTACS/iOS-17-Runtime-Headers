
@interface CBFloatArray : NSObject {
    unsigned long long  _count;
    float * _data;
    unsigned long long  _size;
}

- (const float*)at:(unsigned long long)arg1;
- (id)copyNSArray;
- (unsigned long long)count;
- (const float*)data;
- (float*)dataCopy;
- (void)dealloc;
- (id)description;
- (float)get:(unsigned long long)arg1;
- (id)initWithCount:(unsigned long long)arg1;
- (id)initWithValues:(float*)arg1 andCount:(unsigned long long)arg2;
- (float*)mutableData;

@end
