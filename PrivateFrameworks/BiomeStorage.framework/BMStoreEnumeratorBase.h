
@interface BMStoreEnumeratorBase : NSObject {
    BMFrameStore * _currentFrameStore;
    Class  _dataType;
    BMStreamDatastoreBase * _ds;
    double  _endTime;
    unsigned long long  _eventCount;
    unsigned long long  _frameStoreOffset;
    double  _iterationStartTime;
    unsigned long long  _lastEventCount;
    unsigned long long  _maxEvents;
    BMStreamMetadata * _metadata;
    unsigned long long  _options;
}

@property (nonatomic, readonly) BMStoreBookmark *bookmark;
@property (nonatomic, readonly) BMFrameStore *currentFrameStore;
@property (nonatomic, readonly) BMStreamDatastoreBase *ds;
@property (nonatomic, readonly) BMStreamMetadata *metadata;

- (void).cxx_destruct;
- (id)_eventWithFrameStore:(id)arg1 frame:(id)arg2 error:(unsigned char)arg3;
- (bool)advanceBookmarkToStartTime:(double)arg1 eventsFound:(unsigned long long*)arg2 lastN:(unsigned long long)arg3;
- (bool)advanceBookmarkV1ToStartTime:(double)arg1 eventsFound:(unsigned long long*)arg2 lastN:(unsigned long long)arg3;
- (bool)advanceBookmarkV2ToStartTime:(double)arg1 eventsFound:(unsigned long long*)arg2 lastN:(unsigned long long)arg3;
- (id)bookmark;
- (id)copyNextEventAndMoveBookmark:(bool)arg1;
- (id)copyNextEventAndMoveBookmark:(bool)arg1 makeEvent:(id /* block */)arg2;
- (id)currentFrameStore;
- (id)ds;
- (id)initWithStreamDatastore:(id)arg1 bookmark:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithStreamDatastore:(id)arg1 currentFrameStore:(id)arg2 frameStoreOffset:(unsigned long long)arg3 iterationStartTime:(double)arg4 endTime:(double)arg5 maxEvents:(unsigned long long)arg6 lastN:(unsigned long long)arg7 options:(unsigned long long)arg8 dataType:(Class)arg9;
- (id)initWithStreamDatastore:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 maxEvents:(unsigned long long)arg4 lastN:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (id)initWithStreamDatastore:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 maxEvents:(unsigned long long)arg4 lastN:(unsigned long long)arg5 options:(unsigned long long)arg6 dataType:(Class)arg7;
- (bool)isDataAccessible;
- (id)metadata;
- (id)nextEvent;
- (void)nextEventWithContext:(id /* block */)arg1;
- (id)peekEvent;
- (void)setEndTime:(double)arg1 maxEvents:(unsigned long long)arg2 lastN:(unsigned long long)arg3 reverse:(bool)arg4;
- (void)setFrameStoreOffset:(unsigned long long)arg1;

@end
