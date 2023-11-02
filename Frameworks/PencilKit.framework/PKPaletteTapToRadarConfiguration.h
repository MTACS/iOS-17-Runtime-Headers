
@interface PKPaletteTapToRadarConfiguration : NSObject {
    PKTextInputDebugSharpenerLog * _debugSharpenerLog;
    UIViewController * _presentationViewController;
}

@property (nonatomic, retain) PKTextInputDebugSharpenerLog *debugSharpenerLog;
@property (nonatomic, retain) UIViewController *presentationViewController;

- (void).cxx_destruct;
- (id)debugSharpenerLog;
- (bool)hasContent;
- (id)presentationViewController;
- (void)setDebugSharpenerLog:(id)arg1;
- (void)setPresentationViewController:(id)arg1;

@end
