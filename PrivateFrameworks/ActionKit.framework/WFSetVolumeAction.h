
@interface WFSetVolumeAction : WFAction

- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (void)setMediaVolume:(float)arg1;
- (void)setRingtoneVolume:(float)arg1;
- (id)subcategoryForCategory:(id)arg1;

@end
