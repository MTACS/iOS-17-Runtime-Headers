
@protocol MentalHealthUI.MetalRendererProtocol

@required

- (bool)commandQueueIsEmpty;
- (id /* block */)displayLinkWillRenderFrame:(void *)arg1; // needs 1 arg types, found 5: id /* block */, CADisplayLink *, void*, id, SEL
- (void)setCommandQueueIsEmpty:(bool)arg1;
- (void)setDisplayLinkWillRenderFrame:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CADisplayLink *, void*

@end
