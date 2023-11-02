
@interface FSFBiomeFeatureStoreStream : NSObject <FSFFeatureStoreStream> {
    BMStreamDatastore * _pruneStore;
    BMStreamDatastore * _readStore;
    BMStreamDatastore * _writeStore;
}

@property (nonatomic, retain) BMStreamDatastore *pruneStore;
@property (nonatomic, retain) BMStreamDatastore *readStore;
@property (nonatomic, retain) BMStreamDatastore *writeStore;

- (void).cxx_destruct;
- (bool)deleteCurrentStream;
- (id)initWithConfig:(id)arg1 streamId:(id)arg2;
- (bool)insert:(id)arg1 withInteractionId:(id)arg2 atTime:(double)arg3;
- (id)pruneStore;
- (id)readStore;
- (id)retrieve:(id)arg1;
- (id)retrieveEvents:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)setPruneStore:(id)arg1;
- (void)setReadStore:(id)arg1;
- (void)setWriteStore:(id)arg1;
- (id)writeStore;

@end
