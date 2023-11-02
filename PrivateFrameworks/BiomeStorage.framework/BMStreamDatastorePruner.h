
@interface BMStreamDatastorePruner : NSObject <BMStreamDatastorePruningDelegate> {
    <BMStreamDatastorePruningDelegate> * _delegate;
    BMStreamDatastore * _inner;
}

@property (nonatomic) <BMStreamDatastorePruningDelegate> *delegate;
@property (nonatomic, readonly) bool isDataAccessible;

- (void).cxx_destruct;
- (id)delegate;
- (bool)deleteEventAtBookmark:(id)arg1 outTombstoneBookmark:(id*)arg2;
- (void)didPruneEvents;
- (Class)eventBodyClass;
- (void)eventsFrom:(double)arg1 to:(double)arg2 reason:(unsigned long long)arg3 shouldDeleteUsingBlock:(id /* block */)arg4;
- (id)fetchEventsFrom:(double)arg1 to:(double)arg2;
- (id)initWithStream:(id)arg1 config:(id)arg2;
- (id)initWithStream:(id)arg1 config:(id)arg2 eventDataClass:(Class)arg3;
- (bool)isDataAccessible;
- (id)newEnumeratorFromBookmark:(id)arg1;
- (id)newEnumeratorFromStartTime:(double)arg1;
- (void)removeEventsFrom:(double)arg1 to:(double)arg2 reason:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (id)streamIdentifier;
- (void)syncMappedFiles;
- (void)willPruneEvent:(id)arg1;

@end
