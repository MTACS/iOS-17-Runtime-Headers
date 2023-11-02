
@interface DICVolumeController : NSObject

- (bool)setVolumeForCategory:(id)arg1 volume:(float)arg2 error:(id*)arg3;
- (bool)setVolumeForPhoneCall:(float)arg1 error:(id*)arg2;
- (id)volumeForCategory:(id)arg1 error:(id*)arg2;
- (id)volumeForPhoneCallWithError:(id*)arg1;

@end
