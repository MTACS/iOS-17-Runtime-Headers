
@interface WBSPasswordBreachBloomFilter : NSObject {
    unsigned int  _bucketCount;
    NSData * _bucketData;
    unsigned int  _capacity;
    unsigned int  _errorDenominator;
    unsigned int  _hashCount;
}

@property (nonatomic, readonly) NSData *serializedRepresentation;

- (void).cxx_destruct;
- (void)_enumerateBucketIndexesForData:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)_getBucketAtIndex:(unsigned int)arg1;
- (void)_setBucketAtIndex:(unsigned int)arg1 inBuffer:(char *)arg2;
- (void)addData:(id)arg1;
- (bool)containsData:(id)arg1;
- (bool)containsLowercaseHexStringForData:(id)arg1;
- (id)description;
- (id)initWithCapacity:(unsigned int)arg1 errorDenominator:(unsigned int)arg2 bucketData:(id)arg3;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)serializedRepresentation;

@end
