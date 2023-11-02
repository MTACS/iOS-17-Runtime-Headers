
@interface BMStreamTombstoneEventDatastore : BMStreamDatastoreBase {
    BMStreamDatastore * _streamDatastore;
}

- (void).cxx_destruct;
- (bool)deleteEventAtBookmark:(id)arg1 outTombstoneBookmark:(id*)arg2;
- (void)enumerateEventsFrom:(double)arg1 to:(double)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithStream:(id)arg1 streamPath:(id)arg2 permission:(unsigned long long)arg3 config:(id)arg4 eventDataClass:(Class)arg5 useCase:(id)arg6;
- (id)initWithStream:(id)arg1 streamPath:(id)arg2 permission:(unsigned long long)arg3 config:(id)arg4 streamDatastore:(id)arg5;
- (id)newEnumeratorFromBookmark:(id)arg1;
- (id)newEnumeratorFromBookmark:(id)arg1 options:(unsigned long long)arg2;
- (id)newEnumeratorFromStartTime:(double)arg1;
- (id)newEnumeratorFromStartTime:(double)arg1 options:(unsigned long long)arg2;
- (id)originalEventFromTombstoneEvent:(id)arg1;
- (bool)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2 outBookmark:(id*)arg3;
- (bool)writeTombstoneEvent:(id)arg1 outTombstoneBookmark:(id*)arg2;

@end
