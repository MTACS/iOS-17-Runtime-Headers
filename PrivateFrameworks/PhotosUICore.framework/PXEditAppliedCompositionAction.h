
@interface PXEditAppliedCompositionAction : PXEditCompositionAction {
    NUComposition * _sourceComposition;
    NUComposition * _targetComposition;
}

@property (nonatomic, readonly) NUComposition *sourceComposition;

- (void).cxx_destruct;
- (id)initWithCompositionController:(id)arg1;
- (id)initWithCompositionController:(id)arg1 sourceComposition:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (id)sourceComposition;
- (id)targetComposition;

@end
