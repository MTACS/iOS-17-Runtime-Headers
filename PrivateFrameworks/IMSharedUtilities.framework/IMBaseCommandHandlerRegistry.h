
@interface IMBaseCommandHandlerRegistry : NSObject {
    NSMutableDictionary * _lockdownHandlers;
    NSMutableDictionary * _standardHandlers;
}

@property (nonatomic, readonly) NSDictionary *handlers;
@property (nonatomic, readonly) NSDictionary *lockdownHandlers;
@property (getter=isLockedDown, nonatomic, readonly) bool lockedDown;
@property (nonatomic, readonly) NSDictionary *standardHandlers;

- (void).cxx_destruct;
- (bool)canAddCommand:(id)arg1;
- (id)handlerForCommand:(id)arg1;
- (id)handlers;
- (bool)hasHandlerForCommand:(id)arg1;
- (bool)hasLockdownHandlerForCommand:(id)arg1;
- (id)init;
- (bool)isLockedDown;
- (id)lockdownHandlers;
- (id)noopHandlerForCommand:(id)arg1;
- (void)setLockdownHandler:(id)arg1 forCommand:(id)arg2;
- (void)setPassThroughLockdownHandlerForCommand:(id)arg1;
- (void)setStandardHandler:(id)arg1 forCommand:(id)arg2;
- (id)standardHandlers;

@end
