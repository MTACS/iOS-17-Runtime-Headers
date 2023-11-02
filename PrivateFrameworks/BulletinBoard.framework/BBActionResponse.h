
@interface BBActionResponse : NSObject <NSSecureCoding> {
    unsigned long long  _actionActivationMode;
    long long  _actionBehavior;
    NSString * _actionID;
    NSURL * _actionLaunchURL;
    long long  _actionType;
    NSString * _bulletinButtonID;
    NSDictionary * _bulletinContext;
    NSString * _bulletinPublisherID;
    NSString * _bulletinRecordID;
    NSDictionary * _context;
    bool  _didOpenApplication;
    BSServiceConnectionEndpoint * _endpoint;
    NSString * _originID;
}

@property (nonatomic) unsigned long long actionActivationMode;
@property (nonatomic) long long actionBehavior;
@property (nonatomic, copy) NSString *actionID;
@property (nonatomic, copy) NSURL *actionLaunchURL;
@property (nonatomic) long long actionType;
@property (nonatomic, copy) NSString *bulletinButtonID;
@property (nonatomic, copy) NSDictionary *bulletinContext;
@property (nonatomic, copy) NSString *bulletinPublisherID;
@property (nonatomic, copy) NSString *bulletinRecordID;
@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic) bool didOpenApplication;
@property (nonatomic, copy) BSServiceConnectionEndpoint *endpoint;
@property (nonatomic, copy) NSString *originID;

+ (id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)actionActivationMode;
- (long long)actionBehavior;
- (id)actionID;
- (id)actionLaunchURL;
- (long long)actionType;
- (id)bulletinButtonID;
- (id)bulletinContext;
- (id)bulletinPublisherID;
- (id)bulletinRecordID;
- (id)context;
- (id)description;
- (bool)didOpenApplication;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)originID;
- (void)setActionActivationMode:(unsigned long long)arg1;
- (void)setActionBehavior:(long long)arg1;
- (void)setActionID:(id)arg1;
- (void)setActionLaunchURL:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setBulletinButtonID:(id)arg1;
- (void)setBulletinContext:(id)arg1;
- (void)setBulletinPublisherID:(id)arg1;
- (void)setBulletinRecordID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDidOpenApplication:(bool)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setOriginID:(id)arg1;

@end
