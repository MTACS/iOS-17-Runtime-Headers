
@protocol TMLRuntimeObject <NSObject>

@optional

- (bool)tmlHasPropertyForKey:(NSString *)arg1;
- (void)tmlObjectCompleted;
- (void)tmlSignalAttach:(NSString *)arg1;
- (void)tmlSignalDetach:(NSString *)arg1;

@end
