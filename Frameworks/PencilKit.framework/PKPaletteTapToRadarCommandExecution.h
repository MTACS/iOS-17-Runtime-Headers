
@interface PKPaletteTapToRadarCommandExecution : NSObject <UIEditingOverlayInteractionWithView> {
    PKPaletteTapToRadarConfiguration * _configuration;
}

@property (nonatomic, readonly) PKPaletteTapToRadarConfiguration *configuration;

+ (id)commandExecutionWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)configuration;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)run;

@end
