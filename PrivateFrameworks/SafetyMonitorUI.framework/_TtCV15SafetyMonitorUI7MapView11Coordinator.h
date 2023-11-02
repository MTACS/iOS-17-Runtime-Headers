
@interface _TtCV15SafetyMonitorUI7MapView11Coordinator : NSObject <MKMapViewDelegate> {
    void geocoder;
    void parent;
}

- (void).cxx_destruct;
- (id)init;
- (void)longPressActionWithSender:(id)arg1;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;

@end
