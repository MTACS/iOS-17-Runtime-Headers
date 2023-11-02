
@interface CALNMSMailAccounts : NSObject <CALNMailAccounts>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)canSendMail;

@end
