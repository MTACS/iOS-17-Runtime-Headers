
@interface PGSettlingEffectHighlightProcessor : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    struct { 
        int numberOfHighlightSummaryAssets; 
        int numberOfEliminationsThruSettlingEffectScore; 
        int numberOfSettlingEffectScoresRequested; 
    }  _statistics;
}

@property (nonatomic, readonly) struct { int x1; int x2; int x3; } statistics;

+ (bool)candidate:(id)arg1 passesFilteringWithStatistics:(struct { int x1; int x2; int x3; }*)arg2;

- (void).cxx_destruct;
- (id)fetchHighlightCandidatesWithProgressReporter:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)logStatistics:(struct { int x1; int x2; int x3; })arg1;
- (struct { int x1; int x2; int x3; })statistics;

@end
