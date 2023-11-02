
@interface BLSHEnvironmentTransitionStateTarget : NSObject {
    long long  _backlightState;
    bool  _didCompleteAnimation;
    bool  _didUpdateInitialState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_performedBacklightRamp;
    NSDate * _presentationDate;
    unsigned long long  _sequenceID;
    BLSBacklightSceneVisualState * _visualState;
}

@property long long backlightState;
@property bool didCompleteAnimation;
@property bool didUpdateInitialState;
@property (nonatomic, readonly) NSDate *presentationDate;
@property (nonatomic, readonly) unsigned long long sequenceID;
@property (nonatomic, readonly) BLSBacklightSceneVisualState *visualState;

- (void).cxx_destruct;
- (long long)backlightState;
- (id)debugDescription;
- (id)description;
- (bool)didCompleteAnimation;
- (bool)didUpdateInitialState;
- (unsigned long long)hash;
- (id)initWithSequenceID:(unsigned long long)arg1 backlightState:(long long)arg2;
- (id)initWithSequenceID:(unsigned long long)arg1 backlightState:(long long)arg2 visualState:(id)arg3 presentationDate:(id)arg4;
- (id)initWithTarget:(id)arg1 visualState:(id)arg2 presentationDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVisualState:(id)arg1 presentationDate:(id)arg2;
- (id)presentationDate;
- (unsigned long long)sequenceID;
- (bool)setAndTestDidPerformBacklightRamp;
- (void)setBacklightState:(long long)arg1;
- (void)setDidCompleteAnimation:(bool)arg1;
- (void)setDidUpdateInitialState:(bool)arg1;
- (id)visualState;

@end
