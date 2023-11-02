
@interface IMFindMyHandle : NSObject {
    FMFHandle * _fmfHandle;
    FMLHandle * _fmlHandle;
    NSString * _identifier;
}

@property (nonatomic, readonly) FMFHandle *fmfHandle;
@property (nonatomic, readonly) FMLHandle *fmlHandle;
@property (nonatomic, retain) NSString *identifier;

+ (id)handleWithFMFHandle:(id)arg1;
+ (id)handleWithFMLHandle:(id)arg1;
+ (id)handleWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)fmfHandle;
- (id)fmlHandle;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
