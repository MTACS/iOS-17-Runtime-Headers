
@interface MKMapSnapshotCustomFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {
    _MKAnnotationViewCustomFeatureAnnotation * _internalCustomFeatureAnnotation;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MKAnnotationViewCustomFeatureAnnotation *internalCustomFeatureAnnotation;
@property (nonatomic, readonly) bool showsBalloonCallout;
@property (readonly) Class superclass;

+ (id)customFeatureAnnotationForMapItem:(id)arg1;
+ (id)customFeatureAnnotationForMapItem:(id)arg1 styleAttributes:(id)arg2;
+ (id)customFeatureAnnotationForMapItem:(id)arg1 styleAttributes:(id)arg2 suppressLabel:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (void)encodeWithCoder:(id)arg1;
- (id)feature;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomFeature:(id)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (id)internalCustomFeatureAnnotation;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setInternalCustomFeatureAnnotation:(id)arg1;
- (bool)showsBalloonCallout;

@end
