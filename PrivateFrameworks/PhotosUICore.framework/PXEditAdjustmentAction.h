
@interface PXEditAdjustmentAction : PXEditCompositionAction {
    NSString * _adjustmentKey;
    NUComposition * _sourceComposition;
    NUComposition * _targetComposition;
    NSNumber * _targetValue;
}

@property (nonatomic, readonly) NSString *adjustmentKey;
@property (nonatomic, readonly) NSNumber *targetValue;

+ (id)muteToggleActionWithCompositionController:(id)arg1 isLoopingVideo:(bool)arg2;

- (void).cxx_destruct;
- (id)adjustmentKey;
- (id)init;
- (id)initWithCompositionController:(id)arg1 adjustmentKey:(id)arg2 targetValue:(id)arg3;
- (void)performAction:(id /* block */)arg1;
- (id)sourceComposition;
- (id)targetComposition;
- (id)targetValue;

@end
