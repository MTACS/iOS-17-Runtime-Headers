
@interface AVMusicTrackEventIterator : NSObject {
    struct MusicTrackEventIteratorImpl { struct OpaqueMusicEventIterator {} *x1; } * _impl;
}

- (void)deleteEvent;
- (void)getEventInfo:(double*)arg1 outEventType:(unsigned int*)arg2 eventData:(void**)arg3 dataSize:(unsigned int*)arg4;
- (bool)hasCurrentEvent;
- (bool)hasNextEvent;
- (bool)hasPreviousEvent;
- (id)initWithImpl:(struct MusicTrackEventIteratorImpl { struct OpaqueMusicEventIterator {} *x1; }*)arg1;
- (int)nextEvent;
- (int)previousEvent;
- (void)seek:(double)arg1;
- (bool)setEventInfo:(unsigned int)arg1 data:(const void*)arg2;
- (bool)setEventTime:(double)arg1;

@end
