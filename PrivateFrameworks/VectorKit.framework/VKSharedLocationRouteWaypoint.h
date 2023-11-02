
@interface VKSharedLocationRouteWaypoint : VKRouteWaypointInfo {
    NSString * _annotationText;
    NSString * _customImageKey;
    <VKCustomImageProvider> * _imageProvider;
}

@property (nonatomic, copy) NSString *annotationText;
@property (nonatomic, readonly) NSString *customImageKey;
@property (nonatomic, readonly) <VKCustomImageProvider> *imageProvider;

- (void).cxx_destruct;
- (id)annotationText;
- (id)customImageKey;
- (id)imageProvider;
- (id)initWithWaypoint:(id)arg1 displayInfo:(id)arg2 legIndex:(unsigned long long)arg3 routeCoordinate:(struct { double x1; double x2; double x3; })arg4 adjacentRouteCoordinate:(struct { double x1; double x2; double x3; })arg5;
- (void)setAnnotationText:(id)arg1;
- (void)setImageProvider:(id)arg1 withKey:(id)arg2;

@end
