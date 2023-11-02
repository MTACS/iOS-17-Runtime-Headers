
@interface PHAWorkerJob : NSObject <NSCopying> {
    unsigned long long  _countOfFailedStarts;
    <PHAWorkerJobDelegate> * _delegate;
    bool  _didTimeout;
    bool  _disableReactionCheck;
    bool  _ignoreFurtherResults;
    bool  _isGraphUpdateJob;
    bool  _isReactionJob;
    double  _lastReportTimeAsInterval;
    PHPhotoLibrary * _photoLibrary;
    bool  _producedAssetMetadataChanges;
    unsigned long long  _scenario;
    bool  _treatMissingResultsAsFailures;
    short  _workerType;
}

@property (nonatomic, readonly) float completionScore;
@property (nonatomic) unsigned long long countOfFailedStarts;
@property (nonatomic) <PHAWorkerJobDelegate> *delegate;
@property (nonatomic) bool didTimeout;
@property (nonatomic) bool disableReactionCheck;
@property (nonatomic, readonly) bool finished;
@property (nonatomic) bool ignoreFurtherResults;
@property (readonly) double intervalSinceLastReport;
@property bool isGraphUpdateJob;
@property (setter=setIsReactionJob:, nonatomic) bool isReactionJob;
@property double lastReportTimeAsInterval;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property bool producedAssetMetadataChanges;
@property (nonatomic, readonly) unsigned long long scenario;
@property (nonatomic) bool treatMissingResultsAsFailures;
@property (nonatomic, readonly) short workerType;

- (void).cxx_destruct;
- (float)completionScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfFailedStarts;
- (id)delegate;
- (bool)didTimeout;
- (bool)disableReactionCheck;
- (void)extendTimeout;
- (void)extendTimeoutOrUpdateStopIfNeeded:(bool*)arg1;
- (void)finish;
- (bool)finished;
- (bool)ignoreFurtherResults;
- (id)init;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;
- (double)intervalSinceLastReport;
- (bool)isEqualToWorkerJob:(id)arg1;
- (bool)isGraphUpdateJob;
- (bool)isReactionJob;
- (double)lastReportTimeAsInterval;
- (id)photoLibrary;
- (void)prepare;
- (bool)producedAssetMetadataChanges;
- (unsigned long long)scenario;
- (void)setCountOfFailedStarts:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidTimeout:(bool)arg1;
- (void)setDisableReactionCheck:(bool)arg1;
- (void)setIgnoreFurtherResults:(bool)arg1;
- (void)setIsGraphUpdateJob:(bool)arg1;
- (void)setIsReactionJob:(bool)arg1;
- (void)setLastReportTimeAsInterval:(double)arg1;
- (void)setProducedAssetMetadataChanges:(bool)arg1;
- (void)setTreatMissingResultsAsFailures:(bool)arg1;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)statusAsDictionary;
- (void)stopAcceptingResults;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)treatMissingResultsAsFailures;
- (short)workerType;

@end
