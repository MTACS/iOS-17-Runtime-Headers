
@interface MPCStatisticsReporter : NSObject {
    MPCPlaybackEngine * _playbackEngine;
    NSObject<OS_dispatch_queue> * _writerQueue;
}

@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly, copy) NSString *recordScenarioName;

- (void).cxx_destruct;
- (void)_clearLocalReports;
- (id)_reportDirectoryURL;
- (id)_reportingFileForRecorder:(id)arg1 extension:(id)arg2;
- (void)_sendAnalyticsData;
- (void)_writeAnalyticsDataFromRecorder:(id)arg1;
- (void)_writeData:(id)arg1 toFileAtPath:(id)arg2;
- (void)_writeSamplesFromRecorder:(id)arg1;
- (id)coreAnalyticsEventName;
- (id)description;
- (void)flush;
- (id)init;
- (id)playbackEngine;
- (id)recordScenarioName;
- (void)reportRecordedResults:(id)arg1;

@end
