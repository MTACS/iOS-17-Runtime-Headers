
@interface _UIHIDPathCollection : NSObject {
    unsigned int  _buttonMask;
    unsigned long long  _digitizerSenderID;
    unsigned int  _fallbackContextId;
    struct __IOHIDEvent { } * _hidEvent;
    unsigned char  _locus;
    unsigned long long  _machTimestamp;
    NSMutableDictionary * _pathsById;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
}

@property (nonatomic) unsigned long long digitizerSenderID;
@property (nonatomic) unsigned int fallbackContextId;
@property (nonatomic, readonly) unsigned long long pathCount;

- (void).cxx_destruct;
- (unsigned int)_collectionMask;
- (struct __IOHIDEvent { }*)_createCollectionEventForEvent:(struct __IOHIDEvent { }*)arg1;
- (void)addPath:(id)arg1;
- (void)dealloc;
- (unsigned long long)digitizerSenderID;
- (unsigned int)fallbackContextId;
- (bool)hasPathWithId:(id)arg1;
- (id)hidEventFromCurrentState;
- (id)init;
- (unsigned long long)pathCount;
- (id)pathWithId:(id)arg1;
- (id)pathsInPhase:(long long)arg1;
- (id)pathsTouching;
- (void)removePath:(id)arg1;
- (void)setDigitizerSenderID:(unsigned long long)arg1;
- (void)setFallbackContextId:(unsigned int)arg1;
- (void)updateEventTimestamp:(unsigned long long)arg1;
- (void)updateWithHIDEvent:(struct __IOHIDEvent { }*)arg1;

@end
