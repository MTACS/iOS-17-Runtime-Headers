
@interface PHASESessionVolumeImpl : NSObject <PHASESessionVolumeInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)registerVolumeChangedNotificationBlock:(id /* block */)arg1;
- (id)volumeForCommand:(id)arg1;
- (id)volumeForCommandFromCallback:(id)arg1;

@end
