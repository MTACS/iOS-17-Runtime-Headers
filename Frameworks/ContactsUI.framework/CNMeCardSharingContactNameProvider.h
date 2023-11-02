
@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider> {
    CNContact * _contact;
}

@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)contact;
- (id)familyName;
- (id)givenName;
- (id)initWithContact:(id)arg1;
- (id)middleName;
- (id)nickname;

@end
