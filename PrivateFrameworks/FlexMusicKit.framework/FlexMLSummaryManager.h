
@interface FlexMLSummaryManager : NSObject {
    NSArray * _allDurations;
    NSArray * _allFileNames;
    NSString * _metadataPath;
    NSString * _rootPath;
    int  _targetTimeScale;
}

@property (nonatomic, readonly, copy) NSArray *allDurations;
@property (nonatomic, readonly, copy) NSArray *allFileNames;
@property (nonatomic, readonly) NSArray *allSummaryDurations;
@property (nonatomic, readonly, copy) NSString *metadataPath;
@property (nonatomic, readonly, copy) NSString *rootPath;
@property (nonatomic, readonly) int targetTimeScale;

- (void).cxx_destruct;
- (id)_summaryForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)allDurations;
- (id)allFileNames;
- (id)allSummaryDurations;
- (double)averageGranularityBetweenSummaries;
- (id)initWithSummaryMapping:(id)arg1 bundlePath:(id)arg2 metadataPath:(id)arg3 targetTimeScale:(int)arg4;
- (id)metadataPath;
- (id)rootPath;
- (id)summaryForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)targetTimeScale;

@end
