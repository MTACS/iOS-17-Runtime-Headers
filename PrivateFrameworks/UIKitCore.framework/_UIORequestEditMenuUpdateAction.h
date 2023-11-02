
@interface _UIORequestEditMenuUpdateAction : _UIOServerAction

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) UIMenu *updatedMenu;

- (id)identifier;
- (id)initWithConfigurationIdentifier:(id)arg1 updatedMenu:(id)arg2 reason:(long long)arg3;
- (bool)isPermitted;
- (void)performActionFromConnection:(id)arg1;
- (long long)reason;
- (id)updatedMenu;

@end
