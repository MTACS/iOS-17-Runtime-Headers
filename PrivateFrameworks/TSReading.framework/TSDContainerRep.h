
@interface TSDContainerRep : TSDRep <TSDMutableContainerRep> {
    NSMutableArray * mChildReps;
}

@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)addChildRep:(id)arg1;
- (bool)canDrawInParallel;
- (bool)canSelectChildRep:(id)arg1;
- (id)childReps;
- (id)childRepsForHitTesting;
- (id)containerInfo;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 withGesture:(id)arg2 passingTest:(id /* block */)arg3;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlopBlock:(id /* block */)arg2;
- (void)insertChildRep:(id)arg1 above:(id)arg2;
- (void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildRep:(id)arg1 below:(id)arg2;
- (bool)mustDrawOnMainThreadForInteractiveCanvas;
- (id)mutableContainerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)removeChildRep:(id)arg1;
- (void)replaceChildRep:(id)arg1 with:(id)arg2;
- (void)replaceContentsFromRep:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (void)setChildReps:(id)arg1;
- (void)updateChildrenFromLayout;
- (id)visibleChildLayouts;
- (void)willReplaceContentsFromRep:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (id)accessibilityElements;

@end
