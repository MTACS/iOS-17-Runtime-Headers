
@protocol NTKCompanionAppLibraryObserver <NSObject>

@optional

- (void)appLibrary:(NTKCompanionAppLibrary *)arg1 didAddApp:(NTKCompanionApp *)arg2;
- (void)appLibrary:(NTKCompanionAppLibrary *)arg1 didRemoveApp:(NTKCompanionApp *)arg2;
- (void)appLibrary:(NTKCompanionAppLibrary *)arg1 didUpdateApp:(NTKCompanionApp *)arg2;
- (void)appLibrary:(NTKCompanionAppLibrary *)arg1 didUpdateAppIcon:(NTKCompanionApp *)arg2;

@end
