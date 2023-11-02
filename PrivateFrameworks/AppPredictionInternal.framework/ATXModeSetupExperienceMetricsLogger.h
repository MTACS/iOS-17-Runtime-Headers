
@interface ATXModeSetupExperienceMetricsLogger : NSObject {
    NSURL * _bookmarkURLPath;
    ATXModeConfigurationUIFlowLoggingBiomeStream * _stream;
}

@property (nonatomic, retain) NSURL *bookmarkURLPath;
@property (nonatomic, retain) ATXModeConfigurationUIFlowLoggingBiomeStream *stream;

- (void).cxx_destruct;
- (id)bookmarkURLPath;
- (id)generateBookmark;
- (id)generateBookmarkURLPath;
- (id)init;
- (void)logMetrics;
- (void)setBookmarkURLPath:(id)arg1;
- (void)setStream:(id)arg1;
- (id)stream;
- (void)writeBookmarkToFile:(id)arg1;

@end
