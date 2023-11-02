
@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject {
    ICUserIdentityProperties * _delegatedIdentityProperties;
    ICUserIdentityProperties * _identityProperties;
}

@property (nonatomic, copy) ICUserIdentityProperties *delegatedIdentityProperties;
@property (nonatomic, copy) ICUserIdentityProperties *identityProperties;

- (void).cxx_destruct;
- (id)delegatedIdentityProperties;
- (id)identityProperties;
- (id)initWithRequestContext:(id)arg1 error:(id*)arg2;
- (void)setDelegatedIdentityProperties:(id)arg1;
- (void)setIdentityProperties:(id)arg1;

@end
