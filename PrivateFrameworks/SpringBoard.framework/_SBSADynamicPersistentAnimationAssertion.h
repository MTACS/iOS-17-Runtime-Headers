
@interface _SBSADynamicPersistentAnimationAssertion : SAAssertion {
    long long  _animationType;
    <SAElementIdentifying><NSCopying> * _elementIdentity;
}

@property (nonatomic) long long animationType;
@property (nonatomic, copy) <SAElementIdentifying><NSCopying> *elementIdentity;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (long long)animationType;
- (id)elementIdentity;
- (id)initWithElementIdentity:(id)arg1 animation:(long long)arg2;
- (void)setAnimationType:(long long)arg1;
- (void)setElementIdentity:(id)arg1;

@end
