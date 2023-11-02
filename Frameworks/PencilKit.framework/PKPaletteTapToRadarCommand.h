
@interface PKPaletteTapToRadarCommand : NSObject <UIEditingOverlayInteractionWithView> {
    <PKPaletteTapToRadarCommandDelegate> * _delegate;
    PKPaletteTapToRadarCommandExecution * _execution;
}

@property (nonatomic, readonly) <PKPaletteTapToRadarCommandDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)execute;
- (id)initWithDelegate:(id)arg1;

@end
