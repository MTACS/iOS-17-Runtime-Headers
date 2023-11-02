
@interface BMStreamDatastore : BMStreamDatastoreBase {
    bool  _includeTombstones;
    BMStreamTombstoneEventDatastore * _tombstoneStore;
}

@property (nonatomic, readonly) bool includeTombstones;

- (void).cxx_destruct;
- (void)didMarkFrameAsRemovedWithSegmentName:(id)arg1 frame:(id)arg2 reason:(unsigned long long)arg3 outTombstoneBookmark:(id*)arg4;
- (bool)includeTombstones;
- (id)initForPruningWithStream:(id)arg1 config:(id)arg2 includeTombstones:(bool)arg3;
- (id)initForReadingWithStream:(id)arg1 config:(id)arg2 includeTombstones:(bool)arg3;
- (id)initForWritingWithStream:(id)arg1 config:(id)arg2 includeTombstones:(bool)arg3;
- (id)initWithStream:(id)arg1 permission:(unsigned long long)arg2 config:(id)arg3 includeTombstones:(bool)arg4;
- (id)initWithStream:(id)arg1 permission:(unsigned long long)arg2 config:(id)arg3 includeTombstones:(bool)arg4 eventDataClass:(Class)arg5 useCase:(id)arg6;
- (id)initWithStream:(id)arg1 streamPath:(id)arg2 permission:(unsigned long long)arg3 config:(id)arg4 includeTombstones:(bool)arg5 eventDataClass:(Class)arg6 useCase:(id)arg7;
- (id)newTombstoneEnumeratorFromBookmark:(id)arg1;
- (id)newTombstoneEnumeratorFromStartTime:(double)arg1;
- (id)tombstoneStore;
- (bool)updatePruningPolicy:(id)arg1;
- (void)writeTombstoneEventWithSegmentName:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)writeTombstoneEventWithSegmentName:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reason:(unsigned long long)arg4 outTombstoneBookmark:(id*)arg5;

@end
