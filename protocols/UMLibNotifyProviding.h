
@protocol UMLibNotifyProviding <NSObject>

@required

- (bool)notificationHasPostedForToken:(int)arg1 error:(id*)arg2;
- (bool)post:(NSString *)arg1;
- (int)registerCheck:(NSString *)arg1;
- (int)registerPlain:(NSString *)arg1;
- (bool)setState:(unsigned long long)arg1 forToken:(int)arg2;
- (unsigned long long)stateForToken:(int)arg1 error:(id*)arg2;

@end
