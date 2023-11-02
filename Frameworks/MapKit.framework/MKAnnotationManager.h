
@interface MKAnnotationManager : NSObject {
    NSHashTable * _allClusterAnnotations;
    NSMutableSet * _annotationRepresentations;
    bool  _annotationRepresentationsAreAddedImmediately;
    MKQuadTrie * _annotations;
    NSMapTable * _annotationsToRepresentations;
    <MKAnnotationMarkerContainer> * _container;
    bool  _deferredContainerSelectionAnimated;
    <MKAnnotationManagerDelegate> * _delegate;
    NSMutableSet * _disallowAnimationAnnotations;
    <MKAnnotation> * _draggedAnnotation;
    NSMutableSet * _invalidCoordinateAnnotations;
    bool  _isChangingCoordinate;
    bool  _isDeferringContainerSelection;
    NSMutableSet * _pendingAnnotations;
    NSMutableSet * _pendingRemovalAnnotationRepresentations;
    NSMutableDictionary * _registeredIdentifierToRepresentationClasses;
    NSMapTable * _reusableAnnotationRepresentations;
    <MKAnnotation> * _selectedAnnotation;
    NSTimer * _updateVisibleTimer;
    MKAnnotationView * _userLocationView;
    NSHashTable * _visibleAnnotations;
}

@property (nonatomic, readonly) NSArray *annotationRepresentations;
@property (nonatomic) bool annotationRepresentationsAreAddedImmediately;
@property (nonatomic, readonly) NSArray *annotations;
@property (nonatomic) <MKAnnotationMarkerContainer> *container;
@property (nonatomic) <MKAnnotationManagerDelegate> *delegate;
@property (nonatomic) <MKAnnotation> *draggedAnnotation;
@property (nonatomic, readonly) <MKAnnotationRepresentation> *selectedAnnotationRepresentation;

- (void).cxx_destruct;
- (void)_addAnnotation:(id)arg1 updateVisible:(bool)arg2;
- (id)_addRepresentationForAnnotation:(id)arg1;
- (void)_annotationDidChangeState:(id)arg1 animated:(bool)arg2;
- (void)_removeAnnotation:(id)arg1 updateVisible:(bool)arg2 removeFromContainer:(bool)arg3;
- (void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(bool)arg2;
- (void)_setupUpdateVisibleAnnotationsTimer;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1 allowAnimation:(bool)arg2;
- (void)addAnnotations:(id)arg1;
- (id)addRepresentationForAnnotation:(id)arg1;
- (void)addRepresentationsForAnnotations:(id)arg1;
- (bool)annotationIsInternal:(id)arg1;
- (id)annotationRepresentations;
- (bool)annotationRepresentationsAreAddedImmediately;
- (id)annotations;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (id)container;
- (bool)containsAnnotation:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(bool)arg2;
- (id)draggedAnnotation;
- (id)init;
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerClass:(Class)arg1 forRepresentationReuseIdentifier:(id)arg2;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1 updateVisible:(bool)arg2;
- (void)removeAnnotations:(id)arg1;
- (void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (id)representationForAnnotation:(id)arg1;
- (void)selectAnnotation:(id)arg1 animated:(bool)arg2;
- (id)selectedAnnotationRepresentation;
- (void)setAnnotationRepresentationsAreAddedImmediately:(bool)arg1;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraggedAnnotation:(id)arg1;
- (void)showAnnotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateVisibleAnnotations;

@end
