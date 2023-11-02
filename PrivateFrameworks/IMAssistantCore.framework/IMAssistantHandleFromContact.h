
@interface IMAssistantHandleFromContact : NSObject {
    NSString * _businessID;
    CNContact * _contact;
    NSString * _displayID;
    long long  _handleType;
    CNLabeledValue * _labeledEmailAddress;
    CNLabeledValue * _labeledPhoneNumber;
}

@property (nonatomic, readonly) NSString *businessID;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *displayID;
@property (nonatomic, readonly) NSString *handleID;
@property (nonatomic, readonly) long long handleType;
@property (nonatomic, readonly) CNLabeledValue *labeledEmailAddress;
@property (nonatomic, readonly) CNLabeledValue *labeledPhoneNumber;
@property (nonatomic, readonly) NSString *personHandleLabel;
@property (nonatomic, readonly) long long personHandleType;

+ (id)excludedNumbers;

- (void).cxx_destruct;
- (id)_initWithPhoneNumber:(id)arg1 emailAddress:(id)arg2 businessID:(id)arg3 handleType:(long long)arg4 contact:(id)arg5;
- (id)businessID;
- (id)contact;
- (id)description;
- (id)displayID;
- (id)handleID;
- (long long)handleType;
- (id)initWithBusinessID:(id)arg1;
- (id)initWithCNLabeledEmailAddress:(id)arg1 contact:(id)arg2;
- (id)initWithCNLabeledPhoneNumber:(id)arg1 contact:(id)arg2;
- (id)labeledEmailAddress;
- (id)labeledPhoneNumber;
- (bool)matchesHandleID:(id)arg1;
- (bool)matchesIMHandle:(id)arg1;
- (id)personHandleLabel;
- (long long)personHandleType;

@end
