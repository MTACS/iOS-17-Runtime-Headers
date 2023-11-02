
@protocol UIIndirectScribbleInteractionDelegate <NSObject>

@required

- (void)indirectScribbleInteraction:(void *)arg1 focusElementIfNeeded:(void *)arg2 referencePoint:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: UIIndirectScribbleInteraction *, <NSCopying><NSObject> *, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIResponder<UITextInput> *, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 frameForElement:(id <NSCopying><NSObject>)arg2;
- (bool)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 isElementFocused:(id <NSCopying><NSObject>)arg2;
- (void)indirectScribbleInteraction:(void *)arg1 requestElementsInRect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: UIIndirectScribbleInteraction *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 didFinishWritingInElement:(id <NSCopying><NSObject>)arg2;
- (bool)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 shouldDelayFocusForElement:(id <NSCopying><NSObject>)arg2;
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 willBeginWritingInElement:(id <NSCopying><NSObject>)arg2;

@end
