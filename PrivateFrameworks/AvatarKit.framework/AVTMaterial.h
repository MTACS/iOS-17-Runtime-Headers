
@interface AVTMaterial : NSObject {
    NSDictionary * _additionalPropertyColors;
    UIColor * _baseColor;
}

@property (nonatomic, retain) NSDictionary *additionalPropertyColors;
@property (nonatomic, retain) UIColor *baseColor;

- (void).cxx_destruct;
- (id)additionalPropertyColors;
- (void)applyToSceneKitMaterial:(id)arg1;
- (id)baseColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setAdditionalPropertyColors:(id)arg1;
- (void)setBaseColor:(id)arg1;

@end
