
@interface _MKOfflineRegionCustomFeature : NSObject <VKCustomFeatureAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    VKCustomFeature * _feature;
    GEOMapDataSubscription * _subscription;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOMapDataSubscription *subscription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (id)feature;
- (id)init;
- (id)initWithSubscription:(id)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (id)subscription;

@end
