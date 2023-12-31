
@interface TSDAnnotationController : NSObject

@property (nonatomic, readonly) NSString *annotationNavigationString;
@property (nonatomic, readonly) bool hasAnnotations;
@property (nonatomic) bool textSelectionChangeShouldDismissAnnotations;

- (id)annotationNavigationString;
- (id)annotationNavigationTypeStringUsedForNavigating:(bool)arg1;
- (void)commitCommentText:(id)arg1 forAnnotation:(id)arg2;
- (void)didShowAnnotation:(id)arg1;
- (bool)hasAnnotations;
- (void)nextAnnotation:(id)arg1;
- (void)previousAnnotation:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)setTextSelectionChangeShouldDismissAnnotations:(bool)arg1;
- (bool)textSelectionChangeShouldDismissAnnotations;
- (void)unregisterDelegate:(id)arg1;
- (void)willShowAnnotation:(id)arg1;

@end
