
@interface SABlockingInfo : NSObject

@property (readonly) int blockingPid;
@property (readonly) unsigned long long blockingTid;
@property (readonly) unsigned long long portDomain;
@property (readonly) unsigned long long portFlags;
@property (readonly) NSString *portName;

- (id)_init;
- (int)blockingPid;
- (unsigned long long)blockingTid;
- (bool)hasMatchingBlocker:(id)arg1;
- (id)init;
- (unsigned long long)portDomain;
- (unsigned long long)portFlags;
- (id)portName;

@end
