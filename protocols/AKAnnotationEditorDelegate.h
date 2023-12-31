
@protocol AKAnnotationEditorDelegate <NSObject>

@optional

- (void)didHideAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)didShowAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)willHideAnnotationEditor:(id <AKAnnotationEditor>)arg1;
- (void)willShowAnnotationEditor:(id <AKAnnotationEditor>)arg1;

@end
