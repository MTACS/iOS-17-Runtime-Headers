
@interface _NTKPigmentSyncProviderFaceDomain : NSObject {
    NSString * _domain;
    NTKFace * _face;
}

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) NTKFace *face;

- (void).cxx_destruct;
- (id)domain;
- (id)face;
- (id)initWithFace:(id)arg1 domain:(id)arg2;
- (void)setDomain:(id)arg1;
- (void)setFace:(id)arg1;

@end
