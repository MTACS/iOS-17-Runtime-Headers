
@interface _UIORequestEditMenuDismissalAction : _UIOServerAction

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long reason;

- (id)identifier;
- (id)initWithConfigurationIdentifier:(id)arg1 reason:(long long)arg2;
- (bool)isPermitted;
- (void)performActionFromConnection:(id)arg1;
- (long long)reason;

@end
