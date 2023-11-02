
@interface DBGTargetHub : NSObject

+ (unsigned long long)hubVersion;
+ (id)sharedHub;

- (void)clearAllRequestsAndData;
- (id)init;
- (id)performRequest:(id)arg1;
- (id)performRequestWithRequestInBase64:(id)arg1;

@end
