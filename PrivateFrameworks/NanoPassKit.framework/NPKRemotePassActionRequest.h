
@interface NPKRemotePassActionRequest : NPKRemotePassAction

@property (nonatomic, readonly) PKPaymentPassAction *action;
@property (nonatomic, readonly) NSString *actionText;
@property (nonatomic, readonly) NSString *identifier;

- (id)action;
- (id)actionText;
- (id)description;
- (id)identifier;

@end
