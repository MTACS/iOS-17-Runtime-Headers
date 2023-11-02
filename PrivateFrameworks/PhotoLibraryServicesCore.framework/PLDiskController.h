
@interface PLDiskController : NSObject {
    long long  _bytesRequiredForPhoto;
    struct { 
        unsigned int needToCheckDiskSpace : 1; 
        unsigned int probablyLowOnDiskSpace : 1; 
        unsigned int isAssetsd : 1; 
        unsigned int extra : 28; 
    }  _flags;
    double  _lastFSCheck;
}

+ (long long)diskSpaceAvailableForPath:(id)arg1;
+ (long long)diskSpaceAvailableForUse;
+ (long long)fileSystemSizeForPath:(id)arg1;
+ (long long)freeDiskSpaceThreshold;
+ (bool)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg1;
+ (id)mountPointForPath:(id)arg1;
+ (id)sharedInstance;

- (void)_actuallyUpdateCookie;
- (void)_diskSpaceDidBecomeLow;
- (void)_updateCookie;
- (long long)bytesToAutomaticallyClear;
- (void)dealloc;
- (bool)hasEnoughDiskToTakePicture;
- (id)init;
- (void)updateAvailableDiskSpace;

@end
