
@interface FRCFrameDropDetector : NSObject {
    bool  _debugPrint;
    unsigned long long  _gatingCause;
    bool  _gatingEnabled;
    NSObject<OS_os_log> * _logger;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maximumDuration;
    unsigned long long  _numberOfInsertionPoints;
    long long  _retimingRecipe;
    bool  _singleDropRecoveryEnabled;
    NSMutableArray * frameBurstyDropInfoList;
    NSMutableArray * frameInternalPTSList;
    NSMutableArray * insertionPointList;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minDuration;
    NSArray * sortedMetadataList;
    NSArray * sortedTimingList;
}

@property (nonatomic) bool debugPrint;
@property (nonatomic, readonly) unsigned long long gatingCause;
@property (nonatomic) bool gatingEnabled;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maximumDuration;
@property (nonatomic, readonly) unsigned long long numberOfInsertionPoints;
@property (nonatomic, readonly) long long retimingRecipe;
@property (nonatomic) bool singleDropRecoveryEnabled;

- (void).cxx_destruct;
- (id)buildInsertionPointListFromInternalTimingList:(id)arg1 bailOutCode:(long long*)arg2;
- (id)calculateFrameDropInfoFromSortedMetadataList:(id)arg1 sortedTimingList:(id)arg2;
- (id)calculateFrameDurationFromSortedTimingList:(id)arg1;
- (unsigned long long)countNumberOfFramesWithRecipeInMetadataList:(id)arg1;
- (void)dealloc;
- (bool)debugPrint;
- (void)debugPrintFRCFRCFrameBurstyDropInfo:(id)arg1;
- (void)debugPrintFRCFrameInternalTimingInfo:(id)arg1;
- (void)debugPrintFRCFrameMetadataInfo:(id)arg1;
- (void)debugPrintFRCFrameTimingInfo:(id)arg1;
- (id)detectFrameDropsFromFrameMetadataList:(id)arg1 frameTimingList:(id)arg2;
- (id)detectFrameDropsFromFrameTimingList:(id)arg1;
- (id)detectFrameDropsFromInternalTimingList:(id)arg1;
- (void)detectLocationOfBurstyGapsFromBurstyDropList:(id)arg1 frameInternalTimingList:(id)arg2;
- (id)detectSingleFrameDropsFromFrameTimingList:(id)arg1;
- (void)detectSingleFrameDropsFromInternalTimingList:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })droppingThreshold;
- (id)errorWithDescription:(id)arg1;
- (unsigned long long)gatingCause;
- (bool)gatingEnabled;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDuration;
- (unsigned long long)numberOfInsertionPoints;
- (long long)retimingRecipe;
- (void)scaleNumberOfFramesToInsertFor2xSloMo:(id)arg1;
- (id)selectFrameInsertionPointsFromTimingList:(id)arg1 metadataList:(id)arg2 sloMo:(bool)arg3 withError:(id*)arg4;
- (void)setDebugPrint:(bool)arg1;
- (void)setGatingEnabled:(bool)arg1;
- (void)setPropertiesFromDefaults;
- (void)setSingleDropRecoveryEnabled:(bool)arg1;
- (bool)singleDropRecoveryEnabled;
- (id)sortFrameMetadataListInDisplayOrderFromMetadataList:(id)arg1;
- (id)sortFrameTimingListInDisplayOrderFromTimingList:(id)arg1;

@end
