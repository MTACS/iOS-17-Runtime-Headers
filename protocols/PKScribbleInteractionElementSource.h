
@protocol PKScribbleInteractionElementSource <NSObject>

@required

- (void)_scribbleInteraction:(void *)arg1 focusElement:(void *)arg2 initialFocusSelectionReferencePoint:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: PKScribbleInteraction *, <NSObject><NSCopying> *, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UITextInput> *, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scribbleInteraction:(PKScribbleInteraction *)arg1 frameForElement:(id <NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(void *)arg1 requestElementsInRect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKScribbleInteraction *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, long long, void*

@optional

- (void)_scribbleInteraction:(void *)arg1 focusElement:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKScribbleInteraction *, <NSObject><NSCopying> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UITextInput> *, void*

@end
