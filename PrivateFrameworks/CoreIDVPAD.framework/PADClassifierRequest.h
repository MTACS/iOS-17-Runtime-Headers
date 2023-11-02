
@interface PADClassifierRequest : NSObject {
    NSArray * _gestureTypes;
    NSArray * _gestures;
    unsigned long long  _minNumberOfGestures;
}

@property (nonatomic, retain) NSArray *gestureTypes;
@property (nonatomic, retain) NSArray *gestures;
@property (nonatomic) unsigned long long minNumberOfGestures;

- (void).cxx_destruct;
- (id)gestureTypes;
- (id)gestures;
- (unsigned long long)minNumberOfGestures;
- (void)setGestureTypes:(id)arg1;
- (void)setGestures:(id)arg1;
- (void)setMinNumberOfGestures:(unsigned long long)arg1;

@end
