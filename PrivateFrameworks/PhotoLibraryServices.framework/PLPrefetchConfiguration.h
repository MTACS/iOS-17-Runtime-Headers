
@interface PLPrefetchConfiguration : NSObject {
    unsigned long long  _cloudResourceATVNearLowDiskThreshold;
    double  _cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio;
    double  _cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio;
    unsigned long long  _cloudResourceIntervalBetweenCheckCPLBGDownload;
    unsigned short  _cloudResourceMaxPrefetchRetry;
    unsigned long long  _cloudResourceMaximumSmallLibraryThreshold;
    unsigned short  _cloudResourceMemoriesMaxResourcesPerFetch;
    unsigned short  _cloudResourceNonThumbnailsMaxResourcesPerFetch;
    unsigned long long  _cloudResourcePrefetchMaxFileSize;
    double  _cloudResourceSmallLibraryThresholdRatio;
    unsigned short  _cloudResourceThumbnailsMaxResourcesPerFetch;
    unsigned short  _cloudResourceWidgetMaxResourcesPerFetch;
    unsigned short  _memoryMaxPrefetchPhotosCount;
    unsigned short  _memoryMaxPrefetchVideosCount;
    long long  _memoryPrefetchAllowedIfLastViewedDateWithin;
    long long  _memoryPrefetchIfCreationDateWithin;
    unsigned short  _memoryPrefetchLimit;
}

@property (nonatomic, readonly) unsigned long long cloudResourceATVNearLowDiskThreshold;
@property (nonatomic, readonly) double cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio;
@property (nonatomic) double cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio;
@property (nonatomic, readonly) unsigned long long cloudResourceIntervalBetweenCheckCPLBGDownload;
@property (nonatomic, readonly) unsigned short cloudResourceMaxPrefetchRetry;
@property (nonatomic) unsigned long long cloudResourceMaximumSmallLibraryThreshold;
@property (nonatomic, readonly) unsigned short cloudResourceMemoriesMaxResourcesPerFetch;
@property (nonatomic, readonly) unsigned short cloudResourceNonThumbnailsMaxResourcesPerFetch;
@property (nonatomic) unsigned long long cloudResourcePrefetchMaxFileSize;
@property (nonatomic, readonly) double cloudResourceSmallLibraryThresholdRatio;
@property (nonatomic, readonly) unsigned short cloudResourceThumbnailsMaxResourcesPerFetch;
@property (nonatomic, readonly) unsigned short cloudResourceWidgetMaxResourcesPerFetch;
@property (nonatomic) unsigned short memoryMaxPrefetchPhotosCount;
@property (nonatomic) unsigned short memoryMaxPrefetchVideosCount;
@property (nonatomic) long long memoryPrefetchAllowedIfLastViewedDateWithin;
@property (nonatomic) long long memoryPrefetchIfCreationDateWithin;
@property (nonatomic) unsigned short memoryPrefetchLimit;

+ (long long)_defaultPrefetchOptimizeMode;
+ (long long)defaultPrefetchOptimizeMode;
+ (id)descriptionForPrefetchOptimizeMode:(long long)arg1;
+ (id)overridePrefetchOptimizeMode;

- (unsigned long long)cloudResourceATVNearLowDiskThreshold;
- (double)cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio;
- (double)cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio;
- (unsigned long long)cloudResourceIntervalBetweenCheckCPLBGDownload;
- (unsigned short)cloudResourceMaxPrefetchRetry;
- (unsigned long long)cloudResourceMaximumSmallLibraryThreshold;
- (unsigned short)cloudResourceMemoriesMaxResourcesPerFetch;
- (unsigned short)cloudResourceNonThumbnailsMaxResourcesPerFetch;
- (unsigned long long)cloudResourcePrefetchMaxFileSize;
- (double)cloudResourceSmallLibraryThresholdRatio;
- (unsigned short)cloudResourceThumbnailsMaxResourcesPerFetch;
- (unsigned short)cloudResourceWidgetMaxResourcesPerFetch;
- (id)initWithPrefetchDictionary:(id)arg1;
- (unsigned short)memoryMaxPrefetchPhotosCount;
- (unsigned short)memoryMaxPrefetchVideosCount;
- (long long)memoryPrefetchAllowedIfLastViewedDateWithin;
- (long long)memoryPrefetchIfCreationDateWithin;
- (unsigned short)memoryPrefetchLimit;
- (long long)prefetchOptimizeModeForTotalSizeOfOriginalResources:(long long)arg1 totalSizeOfLocallyAvailableOriginalResources:(long long)arg2 availableSpace:(long long)arg3 overrideMaximumSmallLibraryThresholdGB:(long long)arg4 nonThumbnailsBudget:(long long)arg5;
- (void)setCloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio:(double)arg1;
- (void)setCloudResourceMaximumSmallLibraryThreshold:(unsigned long long)arg1;
- (void)setCloudResourcePrefetchMaxFileSize:(unsigned long long)arg1;
- (void)setMemoryMaxPrefetchPhotosCount:(unsigned short)arg1;
- (void)setMemoryMaxPrefetchVideosCount:(unsigned short)arg1;
- (void)setMemoryPrefetchAllowedIfLastViewedDateWithin:(long long)arg1;
- (void)setMemoryPrefetchIfCreationDateWithin:(long long)arg1;
- (void)setMemoryPrefetchLimit:(unsigned short)arg1;
- (unsigned long long)smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)arg1 availableSpace:(long long)arg2 overrideMaximumThresholdGB:(long long)arg3;
- (void)updateValuesFromPrefetchDictionary:(id)arg1;
- (void)updateValuesFromTrialIfNecessary;

@end
