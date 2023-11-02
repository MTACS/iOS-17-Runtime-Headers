
@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject {
    <CALNMailAccounts> * _mailAccounts;
}

@property (nonatomic, readonly) <CALNMailAccounts> *mailAccounts;

- (void).cxx_destruct;
- (id)initWithMailAccounts:(id)arg1;
- (id)mailAccounts;
- (id)mailtoURLForEvent:(id)arg1;

@end
