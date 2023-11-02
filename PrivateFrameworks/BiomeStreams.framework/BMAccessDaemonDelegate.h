
@interface BMAccessDaemonDelegate : NSObject <BMAccessDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)prepareResource:(id)arg1 withMode:(unsigned long long)arg2;

@end
