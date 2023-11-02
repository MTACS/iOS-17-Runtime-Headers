
@interface PXPlacesMapLayoutDiffer : NSObject {
    NSMutableArray * _changes;
    <PXPlacesMapLayoutResult> * _sourceLayoutResult;
    <PXPlacesMapLayoutResult> * _targetLayoutResult;
}

@property (nonatomic, readonly) <PXPlacesMapLayoutResult> *sourceLayoutResult;
@property (nonatomic, readonly) <PXPlacesMapLayoutResult> *targetLayoutResult;

- (void).cxx_destruct;
- (void)_addTargetLayoutItem:(id)arg1;
- (void)_computeChanges;
- (void)_relateSourceLayoutItem:(id)arg1 withTargetLayoutItem:(id)arg2;
- (void)_removeSourceLayoutItem:(id)arg1;
- (id)computeChanges;
- (id)initWithSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2;
- (id)sourceLayoutResult;
- (id)targetLayoutResult;

@end
