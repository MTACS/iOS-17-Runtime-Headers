
@interface IMFindMyLocation : NSObject {
    FMFLocation * _fmfLocation;
    FMLLocation * _fmlLocation;
}

@property (nonatomic, readonly) FMFLocation *fmfLocation;
@property (nonatomic, readonly) FMLLocation *fmlLocation;
@property (nonatomic, readonly) NSString *shortAddress;

+ (id)locationWithFMFLocation:(id)arg1;
+ (id)locationWithFMFLocation:(id)arg1 fmlLocation:(id)arg2;
+ (id)locationWithFMLLocation:(id)arg1;

- (void).cxx_destruct;
- (id)fmfLocation;
- (id)fmlLocation;
- (unsigned long long)hash;
- (id)initWithFMFLocation:(id)arg1 fmlLocation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)shortAddress;

@end
