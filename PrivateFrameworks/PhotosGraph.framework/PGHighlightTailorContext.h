
@interface PGHighlightTailorContext : NSObject {
    PGBusinessLocationFeatureSummarySource * _businessFeatureSummarySource;
    CLSCurationContext * _curationContext;
    PGGraph * _graph;
    PGHolidayDateFeatureSummarySource * _holidayDateFeatureSummarySource;
    PGLocationFeatureSummarySource * _locationFeatureSummarySource;
    NSObject<OS_os_log> * _loggingConnection;
    PGMeaningFeatureSummarySource * _meaningFeatureSummarySource;
    PGNeighborScoreComputer * _neighborScoreComputer;
    PHPhotoLibrary * _photoLibrary;
    PGPublicEventFeatureSummarySource * _publicEventFeatureSummarySource;
    PGTitleGenerationContext * _titleGenerationContext;
    double  _topTierAestheticScore;
}

@property (nonatomic, readonly) PGBusinessLocationFeatureSummarySource *businessFeatureSummarySource;
@property (readonly) CLSCurationContext *curationContext;
@property (nonatomic, readonly) PGHolidayDateFeatureSummarySource *holidayDateFeatureSummarySource;
@property (nonatomic, readonly) PGLocationFeatureSummarySource *locationFeatureSummarySource;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) PGMeaningFeatureSummarySource *meaningFeatureSummarySource;
@property (readonly) PGNeighborScoreComputer *neighborScoreComputer;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PGPublicEventFeatureSummarySource *publicEventFeatureSummarySource;
@property (readonly) PGTitleGenerationContext *titleGenerationContext;
@property (readonly) double topTierAestheticScore;

- (void).cxx_destruct;
- (id)businessFeatureSummarySource;
- (id)curationContext;
- (id)holidayDateFeatureSummarySource;
- (id)initForTesting;
- (id)initWithPhotoLibrary:(id)arg1 graph:(id)arg2 loggingConnection:(id)arg3;
- (id)locationFeatureSummarySource;
- (id)loggingConnection;
- (id)meaningFeatureSummarySource;
- (id)neighborScoreComputer;
- (id)photoLibrary;
- (id)publicEventFeatureSummarySource;
- (id)titleGenerationContext;
- (double)topTierAestheticScore;

@end
