
@interface TSWPDummyTapGesture : NSObject <TSDGesture> {
    NSString * _gestureKind;
    <TSDGestureTarget> * cachedGestureTarget;
    <TSDGestureDelegate> * gestureDelegate;
    int  gestureState;
    TSDRep * targetRep;
}

@property (nonatomic, retain) <TSDGestureTarget> *cachedGestureTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <TSDGestureDelegate> *gestureDelegate;
@property (nonatomic, retain) NSString *gestureKind;
@property (nonatomic, readonly) int gestureState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSDRep *targetRep;

- (struct CGPoint { double x1; double x2; })boundsLocationForICC:(id)arg1;
- (id)cachedGestureTarget;
- (void)dealloc;
- (id)gestureDelegate;
- (id)gestureKind;
- (int)gestureState;
- (id)initWithKind:(id)arg1;
- (bool)isDone;
- (struct CGPoint { double x1; double x2; })naturalLocationForRep:(id)arg1;
- (void)setCachedGestureTarget:(id)arg1;
- (void)setGestureDelegate:(id)arg1;
- (void)setGestureKind:(id)arg1;
- (void)setTargetRep:(id)arg1;
- (id)targetRep;
- (struct CGPoint { double x1; double x2; })unscaledLocationForICC:(id)arg1;

@end
