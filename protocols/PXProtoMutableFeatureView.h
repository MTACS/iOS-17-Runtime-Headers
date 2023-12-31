
@protocol PXProtoMutableFeatureView <NSObject>

@required

- (<PXProtoFeature> *)feature;
- (bool)isDisabled;
- (bool)isSelected;
- (void)setDisabled:(bool)arg1;
- (void)setFeature:(id <PXProtoFeature>)arg1;
- (void)setSelected:(bool)arg1;

@end
