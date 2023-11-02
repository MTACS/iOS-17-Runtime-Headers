
@protocol CDMService <NSObject>

@required

- (void)addObserver:(id <CDMServiceObserver>)arg1;
- (void)handleCommand:(void *)arg1 withCallback:(void *)arg2; // needs 2 arg types, found 8: <CDMCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CDMCommand> *, NSError *, void*
- (id)initWithConfig:(CDMConfig *)arg1;
- (void)removeObserver:(id <CDMServiceObserver>)arg1;
- (NSString *)serviceName;
- (long long)serviceState;
- (NSSet *)supportedCommands;

@end
