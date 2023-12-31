
@protocol MKAnnotationRepresentation <NSObject>

@required

- (void)_invalidateCachedCoordinate;
- (bool)_isPendingSelectionAnimated;
- (void)_setHiddenForOffscreen:(bool)arg1;
- (bool)_shouldDeselectWhenDragged;
- (bool)isPersistent;
- (void)prepareForReuse;
- (NSString *)reuseIdentifier;
- (MKAnnotationView<MKAnnotationRepresentation> *)viewRepresentation;

@end
