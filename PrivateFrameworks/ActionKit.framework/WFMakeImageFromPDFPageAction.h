
@interface WFMakeImageFromPDFPageAction : WFAction

- (void)initializeParameters;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (struct CGColorSpace { }*)selectedColorspace;
- (id)selectedFileType;
- (double)selectedResolution;

@end
