
@interface HMMLogEventTagProcessor : NSObject <HMMTagSessionProcessing> {
    bool  _active;
    long long  _lastUpdate;
    HMMLogEvent * _logEvent;
    <HMMLogEventSubmitting> * _submitter;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastUpdate;
@property (nonatomic, readonly) HMMLogEvent *logEvent;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *submitter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *tagProcessingBlocks;

- (void).cxx_destruct;
- (void)closeForReason:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSubmitter:(id)arg1;
- (bool)isActive;
- (long long)lastUpdate;
- (id)logEvent;
- (void)setLastUpdate:(long long)arg1;
- (void)setLogEventCloseReason:(unsigned long long)arg1;
- (id)submitter;
- (id)tagProcessingBlocks;

@end
