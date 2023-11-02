
@protocol MRUSystemVolumeControllerDelegate <NSObject>

@required

- (void)systemVolumeController:(MRUSystemVolumeController *)arg1 didChangeVolumeControlCapabilities:(unsigned int)arg2 effectiveVolumeValue:(float)arg3 forType:(long long)arg4;

@end
