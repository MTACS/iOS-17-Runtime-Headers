
@interface PDFViewController : NSObject <UIEditMenuInteractionDelegate> {
    PDFViewControllerPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateAnotation:(id)arg1;
- (void)_addControlForAnnotation:(id)arg1;
- (id)_annotationAtGestureLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_annotationHit:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_annotationHitLongPress:(id)arg1 gestureState:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (id)_annotationsForSelection:(id)arg1;
- (void)_closeTextEditingMenu;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPageView:(id)arg2;
- (void)_doButtonHit:(id)arg1;
- (id)_findNextActivatableAnnotationOnPage:(id)arg1 fromAnnotation:(id)arg2 direction:(unsigned long long)arg3;
- (id)_getPagePoint:(struct CGPoint { double x1; double x2; }*)arg1 forGestureLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_handleButtonHit:(id)arg1;
- (bool)_handleFormFillingEventAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_hidePDFMarkupMenuView;
- (void)_hideTextSelectionMenu;
- (id)_pageViewForAnnotation:(id)arg1;
- (void)_performDoubleTapAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_postAnnotationHitNotification:(id)arg1;
- (void)_postAnnotationWillHitNotification:(id)arg1;
- (bool)_shouldUpdateMarkupWithStyle:(unsigned long long)arg1 onPage:(id)arg2 forIndexSet:(id)arg3;
- (void)activateNextAnnotation:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)activeAnnotation;
- (id)addAnnotationForDetectedFormField:(id)arg1 onPage:(id)arg2 activate:(bool)arg3;
- (id)additionalEditMenuElementsForMarkupAnnotation:(id)arg1;
- (id)additionalEditMenuElementsForSelection:(id)arg1;
- (void)dealloc;
- (void)deleteAnnotation;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (void)editNoteForAnnotation:(id)arg1;
- (void)findNextActivatableAnnotationFromPage:(id)arg1 fromAnnotation:(id)arg2 direction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)handleGesture:(id)arg1;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)handleTextSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)hideActiveMenus;
- (void)highlight:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (bool)isUpdatingSelectionMarkups;
- (void)populateAnnotationsFromDetectedAnnotationsOnPage:(id)arg1;
- (void)removeControlForAnnotation:(id)arg1;
- (void)removeNoteForAnnotation:(id)arg1;
- (void)setActiveAnnotation:(id)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1 forAnnotation:(id)arg2;
- (void)setMarkupStyle:(unsigned long long)arg1 forSelection:(id)arg2 clearSelection:(bool)arg3;
- (void)showActiveMenus;
- (void)showMarkupStyleMenuForMarkupAnnotation;
- (void)showMenuForMarkupAnnotation:(id)arg1;
- (unsigned long long)textSelectionMenu;

@end
