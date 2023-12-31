
@interface PLCPLDownloadContext : NSObject {
    bool  _completed;
    NSError * _error;
    double  _progress;
    NSString * _resourceTypeDescription;
    NSString * _taskIdentifier;
    double  _updateLastQueuedTime;
}

@property bool completed;
@property (retain) NSError *error;
@property double progress;
@property (retain) NSString *resourceTypeDescription;
@property (retain) NSString *taskIdentifier;
@property double updateLastQueuedTime;

- (void).cxx_destruct;
- (bool)completed;
- (id)description;
- (id)error;
- (double)progress;
- (id)resourceTypeDescription;
- (void)setCompleted:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setResourceTypeDescription:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)setUpdateLastQueuedTime:(double)arg1;
- (id)taskIdentifier;
- (void)updateFromDownloadStatusUserInfo:(id)arg1;
- (double)updateLastQueuedTime;

@end
