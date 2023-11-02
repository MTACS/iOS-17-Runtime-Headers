
@interface _UIORequestEditMenuPresentationAction : _UIOServerAction

@property (nonatomic, readonly) _UIOEditMenuPresentationConfiguration *configuration;

- (id)configuration;
- (id)initWithConfiguration:(id)arg1 view:(id)arg2;
- (bool)isPermitted;
- (void)performActionFromConnection:(id)arg1;

@end
