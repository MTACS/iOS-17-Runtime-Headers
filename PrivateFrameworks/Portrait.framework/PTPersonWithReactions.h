
@interface PTPersonWithReactions : NSObject {
    bool  _bothHandsDetected;
    PTPersonReactionSlot * _bothHandsSlot;
    NSNumber * _identifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTwoHandReactionEndTime;
    unsigned int  _lastTwoHandReactionType;
    PTPersonReactionSlot * _leftHandSlot;
    int  _numFramesInactive;
    PTPersonReactionSlot * _rightHandSlot;
    PTHandGesture * _unknownGesture;
}

@property (nonatomic, readonly) NSNumber *identifier;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastTwoHandReactionEndTime;
@property unsigned int lastTwoHandReactionType;
@property int numFramesInactive;
@property (nonatomic, readonly) NSArray *reactions;

- (void).cxx_destruct;
- (void)_stopActiveGestureOnSlot:(id)arg1;
- (void)_updateReactionSlot:(id)arg1 withOneHand:(id)arg2 optionalOtherHand:(id)arg3 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastTwoHandReactionEndTime;
- (unsigned int)lastTwoHandReactionType;
- (int)numFramesInactive;
- (id)reactions;
- (void)setLastTwoHandReactionEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLastTwoHandReactionType:(unsigned int)arg1;
- (void)setNumFramesInactive:(int)arg1;
- (void)updateWithLeftHand:(id)arg1 rightHand:(id)arg2 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

@end
