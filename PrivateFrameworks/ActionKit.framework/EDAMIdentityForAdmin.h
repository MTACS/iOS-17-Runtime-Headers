
@interface EDAMIdentityForAdmin : FATObject {
    EDAMIdentity * _identity;
    NSNumber * _state;
    NSNumber * _stateChanged;
}

@property (nonatomic, retain) EDAMIdentity *identity;
@property (nonatomic, retain) NSNumber *state;
@property (nonatomic, retain) NSNumber *stateChanged;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)identity;
- (void)setIdentity:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStateChanged:(id)arg1;
- (id)state;
- (id)stateChanged;

@end
