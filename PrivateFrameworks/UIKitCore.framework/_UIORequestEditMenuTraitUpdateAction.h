
@interface _UIORequestEditMenuTraitUpdateAction : _UIOServerAction

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long userInterfaceStyle;

- (id)identifier;
- (id)initWithConfigurationIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2;
- (bool)isPermitted;
- (void)performActionFromConnection:(id)arg1;
- (long long)userInterfaceStyle;

@end
