
@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase

- (id)_eventWithFrameStore:(id)arg1 frame:(id)arg2 error:(unsigned char)arg3;
- (id)_originalEventWithFrameStore:(id)arg1 frame:(id)arg2 error:(unsigned char)arg3;
- (id)nextEvent;
- (id)nextTombstoneEvent;
- (id)peekEvent;
- (id)peekTombstoneEvent;

@end
