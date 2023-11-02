
@interface CRChallengeObject : NSObject <NSSecureCoding> {
    NSString * componentType;
    NSNumber * keyIndex;
    NSData * nonce;
    NSDictionary * properties;
}

@property (nonatomic, retain) NSString *componentType;
@property (nonatomic, retain) NSNumber *keyIndex;
@property (nonatomic, retain) NSData *nonce;
@property (nonatomic, retain) NSDictionary *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)componentType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponentType:(id)arg1 challenge:(id)arg2 keyIndex:(id)arg3 properties:(id)arg4;
- (id)keyIndex;
- (id)nonce;
- (id)properties;
- (void)setComponentType:(id)arg1;
- (void)setKeyIndex:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setProperties:(id)arg1;

@end
