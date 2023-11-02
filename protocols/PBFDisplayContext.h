
@protocol PBFDisplayContext <NSObject>

@required

- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisplayContext:(id <PBFDisplayContext>)arg1;
- (long long)pbf_accessibilityContrast;
- (NSString *)pbf_displayContextPersistenceIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pbf_frame;
- (long long)pbf_interfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pbf_referenceBounds;
- (double)pbf_scale;
- (unsigned long long)pbf_significantEventsCounter;
- (long long)pbf_userInterfaceStyle;

@end
