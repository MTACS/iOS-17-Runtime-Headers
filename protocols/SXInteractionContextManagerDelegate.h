
@protocol SXInteractionContextManagerDelegate <NSObject>

@required

- (bool)shouldStartPreviewForInteractionContextManager:(id <SXInteractionContextManager>)arg1;
- (void)willEndPreviewingForInteractionContextManager:(id <SXInteractionContextManager>)arg1;
- (void)willStartPreviewingForInteractionContextManager:(id <SXInteractionContextManager>)arg1;

@end
