
@interface _UIContextMenuCommitAnimation : NSObject {
    _UIContextMenuCommitContainerView * _animationContainer;
    unsigned long long  _animationCount;
    UIView * _container;
    UIView * _destination;
    _UIPortalView * _destinationContentPortalView;
    double  _destinationRadius;
    UIView * _destinationTransformView;
    UIView * _morphContainer;
    UIView * _originalContentSnapshotView;
    UIView * _source;
    double  _sourceRadius;
    UIView * _sourceSnapshotView;
    UIView * _sourceTransformView;
}

@property (nonatomic, retain) _UIContextMenuCommitContainerView *animationContainer;
@property (nonatomic) unsigned long long animationCount;
@property (nonatomic, retain) UIView *container;
@property (nonatomic, retain) UIView *destination;
@property (nonatomic, retain) _UIPortalView *destinationContentPortalView;
@property (nonatomic) double destinationRadius;
@property (nonatomic, retain) UIView *destinationTransformView;
@property (nonatomic, retain) UIView *morphContainer;
@property (nonatomic, retain) UIView *originalContentSnapshotView;
@property (nonatomic, retain) UIView *source;
@property (nonatomic) double sourceRadius;
@property (nonatomic, retain) UIView *sourceSnapshotView;
@property (nonatomic, retain) UIView *sourceTransformView;

- (void).cxx_destruct;
- (void)_prepareAnimationViews;
- (void)_prepareSnapshots;
- (void)animateWithAlongsideActions:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)animationContainer;
- (unsigned long long)animationCount;
- (id)container;
- (id)destination;
- (id)destinationContentPortalView;
- (double)destinationRadius;
- (id)destinationTransformView;
- (id)initWithSource:(id)arg1 container:(id)arg2;
- (id)morphContainer;
- (id)originalContentSnapshotView;
- (void)setAnimationContainer:(id)arg1;
- (void)setAnimationCount:(unsigned long long)arg1;
- (void)setContainer:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationContentPortalView:(id)arg1;
- (void)setDestinationRadius:(double)arg1;
- (void)setDestinationTransformView:(id)arg1;
- (void)setMorphContainer:(id)arg1;
- (void)setOriginalContentSnapshotView:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceRadius:(double)arg1;
- (void)setSourceSnapshotView:(id)arg1;
- (void)setSourceTransformView:(id)arg1;
- (id)source;
- (double)sourceRadius;
- (id)sourceSnapshotView;
- (id)sourceTransformView;

@end
