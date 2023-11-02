
@interface NFTrustSignResponse : NFTrustObject {
    NSNumber * _counterValue;
    NFTrustKey * _key;
    NSData * _trustObjectInternalRawNSData;
}

@property (nonatomic, retain) NSNumber *counterValue;
@property (nonatomic, retain) NFTrustKey *key;
@property (nonatomic, readonly) NSString *rawData;
@property (nonatomic, retain) NSData *trustObjectInternalRawNSData;

+ (id)signResponseWithRawData:(id)arg1 counterValueData:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)counterValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)rawData;
- (void)setCounterValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setTrustObjectInternalRawNSData:(id)arg1;
- (id)trustObjectInternalRawNSData;

@end
