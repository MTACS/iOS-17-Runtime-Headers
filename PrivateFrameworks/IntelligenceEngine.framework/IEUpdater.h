
@interface IEUpdater : NSObject

- (id)getFileVersion:(id)arg1;
- (id)getHighestVersionWithinRelease:(id)arg1;
- (bool)isUpdateAvailable:(id)arg1;
- (bool)updateToLatest:(id)arg1;

@end
