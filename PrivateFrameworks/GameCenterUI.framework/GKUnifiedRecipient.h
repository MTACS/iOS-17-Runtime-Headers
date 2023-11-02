
@interface GKUnifiedRecipient : NSObject {
    CNContact * _contact;
    NSString * _fullName;
    NSString * _handle;
    NSString * _label;
    NSString * _nickName;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *nickName;

+ (id)recipientForContact:(id)arg1;
+ (id)recipientForHandle:(id)arg1;

- (void).cxx_destruct;
- (id)contact;
- (id)displayName;
- (id)fullName;
- (id)handle;
- (id)label;
- (id)nickName;
- (void)setContact:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setNickName:(id)arg1;

@end
