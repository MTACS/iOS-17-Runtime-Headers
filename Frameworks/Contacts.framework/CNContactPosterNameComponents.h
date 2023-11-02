
@interface CNContactPosterNameComponents : NSObject {
    long long  _emphasizedNameComponentIndex;
    NSString * _firstNameComponent;
    NSString * _secondNameComponent;
    long long  _singleNameComponentIndex;
}

@property long long emphasizedNameComponentIndex;
@property (copy) NSString *firstNameComponent;
@property (copy) NSString *secondNameComponent;
@property long long singleNameComponentIndex;

- (void).cxx_destruct;
- (id)debugDescription;
- (long long)emphasizedNameComponentIndex;
- (id)firstNameComponent;
- (id)init;
- (id)secondNameComponent;
- (void)setEmphasizedNameComponentIndex:(long long)arg1;
- (void)setFirstNameComponent:(id)arg1;
- (void)setSecondNameComponent:(id)arg1;
- (void)setSingleNameComponentIndex:(long long)arg1;
- (long long)singleNameComponentIndex;

@end
