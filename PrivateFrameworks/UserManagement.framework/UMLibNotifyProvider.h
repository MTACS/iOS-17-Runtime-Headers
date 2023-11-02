
@interface UMLibNotifyProvider : NSObject <UMLibNotifyProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)notificationHasPostedForToken:(int)arg1 error:(id*)arg2;
- (bool)post:(id)arg1;
- (int)registerCheck:(id)arg1;
- (int)registerPlain:(id)arg1;
- (bool)setState:(unsigned long long)arg1 forToken:(int)arg2;
- (unsigned long long)stateForToken:(int)arg1 error:(id*)arg2;

@end
