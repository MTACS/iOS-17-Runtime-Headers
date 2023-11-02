
@interface _MKUserLocationInternalView : _MKUserLocationView {
    MKUserLocationView * _parentView;
}

@property (nonatomic) MKUserLocationView *parentView;

- (void).cxx_destruct;
- (id)_annotationContainer;
- (id)_containerView;
- (id)_mapView;
- (double)_pointsForDistance:(double)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;

@end
