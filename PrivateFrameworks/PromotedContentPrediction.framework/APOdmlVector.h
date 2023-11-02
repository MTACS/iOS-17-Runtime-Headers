
@interface APOdmlVector : NSObject <NSSecureCoding> {
    float * _dataPtr;
    unsigned int  _length;
    NSString * _version;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned int length;
@property (nonatomic, retain) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float*)_createDataPtrFromArray:(id)arg1;
- (id)_initWithVersion:(id)arg1 length:(unsigned int)arg2 rawMallocedFloats:(float*)arg3;
- (id)arrayOfNumbers;
- (id)cosineSimilarity:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (float)dotProduct:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithVersion:(id)arg1 andArray:(id)arg2;
- (id)initWithVersion:(id)arg1 data:(id)arg2;
- (id)initWithVersion:(id)arg1 length:(unsigned int)arg2 floats:(float*)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned int)length;
- (float)magnitude;
- (id)scalarMultiply:(float)arg1;
- (void)setArrayOfNumber:(id)arg1;
- (void)setDataPtr:(float*)arg1;
- (void)setVersion:(id)arg1;
- (id)vectorAdd:(id)arg1;
- (id)vectorSubtract:(id)arg1;
- (id)version;

@end
