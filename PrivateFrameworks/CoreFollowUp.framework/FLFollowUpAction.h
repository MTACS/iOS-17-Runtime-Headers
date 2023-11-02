
@interface FLFollowUpAction : NSObject <HMDFollowUpAction, NSSecureCoding> {
    unsigned long long  _eventSource;
    NSString * _identifier;
    NSString * _label;
    NSData * _launchActionArguments;
    NSURL * _launchActionURL;
    unsigned long long  _sqlID;
    NSURL * _url;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSData *_userInfoData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool destructive;
@property (nonatomic) unsigned long long eventSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSString *label;
@property (nonatomic, copy) NSData *launchActionArguments;
@property (copy) NSURL *launchActionURL;
@property (nonatomic) unsigned long long sqlID;
@property (readonly) Class superclass;
@property (copy) NSURL *url;
@property (copy) NSDictionary *userInfo;

+ (id)actionWithLabel:(id)arg1 url:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_loadActionURL;
- (id)_userInfoData;
- (id)description;
- (bool)destructive;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventSource;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 url:(id)arg2;
- (id)label;
- (id)launchActionArguments;
- (id)launchActionURL;
- (void)setDestructive:(bool)arg1;
- (void)setEventSource:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLaunchActionArguments:(id)arg1;
- (void)setLaunchActionURL:(id)arg1;
- (void)setSqlID:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_userInfoData:(id)arg1;
- (unsigned long long)sqlID;
- (id)url;
- (id)userInfo;

@end
