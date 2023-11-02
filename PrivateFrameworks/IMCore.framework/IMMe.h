
@interface IMMe : NSObject {
    CNContact * _cnContact;
    NSArray * _cnEmails;
    NSString * _cnFirstName;
    NSString * _cnFullName;
    NSMutableArray * _cnIMHandles;
    NSString * _cnLastName;
    NSString * _cnNickname;
    NSMutableArray * _loginIMHandles;
}

@property (nonatomic, readonly) IMHandle *bestIMHandle;
@property (nonatomic, retain) CNContact *cnContact;
@property (nonatomic, retain) NSArray *cnEmails;
@property (nonatomic, retain) NSString *cnFirstName;
@property (nonatomic, retain) NSString *cnFullName;
@property (nonatomic, retain) NSMutableArray *cnIMHandles;
@property (nonatomic, retain) NSString *cnLastName;
@property (nonatomic, retain) NSString *cnNickname;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSArray *emails;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSArray *imHandles;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, retain) NSMutableArray *loginIMHandles;
@property (nonatomic, readonly) NSString *nickname;

+ (id)fallbackUserName;
+ (id)firstNameFromFallbackUserName;
+ (id)imHandleForService:(id)arg1;
+ (id)lastNameFromFallbackUserName;
+ (id)me;

- (void).cxx_destruct;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (bool)addIMHandle:(id)arg1;
- (bool)addLoginIMHandle:(id)arg1;
- (id)bestIMHandle;
- (id)cnContact;
- (id)cnEmails;
- (id)cnFirstName;
- (id)cnFullName;
- (id)cnIMHandles;
- (id)cnLastName;
- (id)cnNickname;
- (id)description;
- (id)email;
- (id)emails;
- (id)firstName;
- (id)fullName;
- (id)guid;
- (id)imHandles;
- (id)init;
- (bool)isIMHandleLoginIMHandle:(id)arg1;
- (id)lastName;
- (id)loginIMHandles;
- (void)myPictureChanged;
- (id)nickname;
- (void)rebuildIMHandles;
- (bool)removeIMHandle:(id)arg1;
- (bool)removeLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (void)setCNContact:(id)arg1;
- (void)setCnContact:(id)arg1;
- (void)setCnEmails:(id)arg1;
- (void)setCnFirstName:(id)arg1;
- (void)setCnFullName:(id)arg1;
- (void)setCnIMHandles:(id)arg1;
- (void)setCnLastName:(id)arg1;
- (void)setCnNickname:(id)arg1;
- (void)setLoginIMHandles:(id)arg1;

@end
