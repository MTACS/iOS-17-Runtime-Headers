
@interface PCNativeAsset : NSObject <NSSecureCoding> {
    unsigned long long  _adamID;
    NSArray * _assetInformation;
    long long  _location;
    NSString * _name;
    NSString * _treatment;
}

@property (nonatomic) unsigned long long adamID;
@property (nonatomic, retain) NSArray *assetInformation;
@property (nonatomic) long long location;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *treatment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)adamID;
- (id)assetInformation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)location;
- (id)name;
- (void)setAdamID:(unsigned long long)arg1;
- (void)setAssetInformation:(id)arg1;
- (void)setLocation:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setTreatment:(id)arg1;
- (id)treatment;

@end
