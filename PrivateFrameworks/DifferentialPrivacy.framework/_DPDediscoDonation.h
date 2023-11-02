
@interface _DPDediscoDonation : NSObject <NSSecureCoding> {
    NSDictionary * _algorithmParameters;
    long long  _dimension;
    NSString * _key;
    NSDictionary * _metadata;
    NSString * _serverAlgorithm;
    NSData * _share1;
    NSData * _share2;
}

@property (nonatomic, copy) NSDictionary *algorithmParameters;
@property (nonatomic) long long dimension;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSString *serverAlgorithm;
@property (nonatomic, copy) NSData *share1;
@property (nonatomic, copy) NSData *share2;

+ (id)requiredClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)algorithmParameters;
- (id)convertToHexString:(id)arg1;
- (long long)dimension;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 share1:(id)arg2 share2:(id)arg3 dimension:(long long)arg4 metadata:(id)arg5 serverAlgorithm:(id)arg6 algorithmParameters:(id)arg7;
- (id)key;
- (id)metadata;
- (id)serverAlgorithm;
- (void)setAlgorithmParameters:(id)arg1;
- (void)setDimension:(long long)arg1;
- (void)setKey:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setServerAlgorithm:(id)arg1;
- (void)setShare1:(id)arg1;
- (void)setShare2:(id)arg1;
- (id)share1;
- (id)share2;
- (id)toDictionary;

@end
