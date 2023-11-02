
@interface BMEventExtractor : NSObject {
    BMMiningTaskConfig * _bmMiningTaskConfig;
    bool  _shouldStop;
}

@property (retain) BMMiningTaskConfig *bmMiningTaskConfig;
@property bool shouldStop;

- (void).cxx_destruct;
- (id)bmMiningTaskConfig;
- (id)extractEventsFilteredByTypes:(id)arg1 taskSpecificEventProviders:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithBMMiningTaskConfig:(id)arg1;
- (void)setBmMiningTaskConfig:(id)arg1;
- (void)setShouldStop:(bool)arg1;
- (bool)shouldStop;
- (void)terminateEarly;

@end
