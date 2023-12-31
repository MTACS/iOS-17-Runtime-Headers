
@protocol MKAnnotationManagerDelegate <NSObject>

@required

- (void)annotationManager:(MKAnnotationManager *)arg1 didAddAnnotationRepresentations:(NSArray *)arg2;
- (void)annotationManager:(MKAnnotationManager *)arg1 didDeselectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg2;
- (void)annotationManager:(MKAnnotationManager *)arg1 didRemoveAnnotationRepresentations:(NSArray *)arg2;
- (void)annotationManager:(MKAnnotationManager *)arg1 didSelectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg2;
- (<MKAnnotationRepresentation> *)annotationManager:(MKAnnotationManager *)arg1 representationForAnnotation:(id <MKAnnotation>)arg2;
- (void)annotationManagerDidChangeVisibleAnnotationRepresentations:(MKAnnotationManager *)arg1;

@optional

- (bool)annotationManager:(MKAnnotationManager *)arg1 canSelectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg2;
- (bool)annotationManager:(MKAnnotationManager *)arg1 shouldAnimateDeselectionOfAnnotation:(id <MKAnnotation>)arg2 forSelectionOfAnnotation:(id <MKAnnotation>)arg3;
- (void)annotationManager:(MKAnnotationManager *)arg1 willDeselectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg2;

@end
