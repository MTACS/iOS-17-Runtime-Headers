
@interface PXPeopleConfirmationInfo : NSObject {
    NSString * _localizedName;
    NSSet * _otherPersons;
    PHPerson * _sourcePerson;
    PHPerson * _targetPerson;
    bool  _wasNaming;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSSet *otherPersons;
@property (nonatomic, readonly) PHPerson *sourcePerson;
@property (nonatomic, readonly) PHPerson *targetPerson;
@property (nonatomic, readonly) bool wasNaming;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBootstrapContext:(id)arg1;
- (id)initWithSourcePerson:(id)arg1 targetPerson:(id)arg2 confirmedSuggestions:(id)arg3;
- (id)localizedName;
- (id)otherPersons;
- (id)sourcePerson;
- (id)targetPerson;
- (bool)wasNaming;

@end
