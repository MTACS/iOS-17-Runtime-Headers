
@interface BKSTouchStream : NSObject {
    unsigned int  _reference;
}

@property unsigned int reference;

- (id)initWithContextID:(unsigned int)arg1 displayUUID:(id)arg2 identifier:(unsigned char)arg3 policy:(id)arg4;
- (void)invalidate;
- (unsigned int)reference;
- (void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3;
- (void)setEventDispatchMode:(unsigned char)arg1 lastTouchTimestamp:(double)arg2;
- (void)setReference:(unsigned int)arg1;

@end
