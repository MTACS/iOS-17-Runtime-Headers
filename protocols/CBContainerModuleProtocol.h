
@protocol CBContainerModuleProtocol <NSObject>

@required

- (id)copyPropertyForKey:(NSString *)arg1;
- (id)copyPropertyForKey:(NSString *)arg1 withParameter:(id)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (void)registerNotificationBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, void*
- (bool)setProperty:(id)arg1 forKey:(NSString *)arg2;
- (void)start;
- (void)stop;
- (void)unregisterNotificationBlock;

@end
