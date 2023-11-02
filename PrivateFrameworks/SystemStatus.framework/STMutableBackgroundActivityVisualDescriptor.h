
@interface STMutableBackgroundActivityVisualDescriptor : STBackgroundActivityVisualDescriptor

@property (nonatomic, retain) STBackgroundActivityVisualDescriptorColorRepresentation *backgroundColorRepresentation;
@property (nonatomic, copy) NSSet *crossfadableActivities;
@property (nonatomic) double fontSizeAdjustment;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *packageName;
@property (nonatomic, copy) NSString *preferredContinuousAnimationName;
@property (nonatomic, copy) NSString *preferredVisualEffectName;
@property (nonatomic) bool prefersToKeepContentVisible;
@property (nonatomic) bool prefersToSuppressPulse;
@property (nonatomic, copy) NSString *systemImageName;
@property (nonatomic, copy) NSString *textLabel;
@property (nonatomic) double verticalOffsetInPixels;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackgroundColorRepresentation:(id)arg1;
- (void)setCrossfadableActivities:(id)arg1;
- (void)setFontSizeAdjustment:(double)arg1;
- (void)setImageName:(id)arg1;
- (void)setPackageName:(id)arg1;
- (void)setPreferredContinuousAnimationName:(id)arg1;
- (void)setPreferredVisualEffectName:(id)arg1;
- (void)setPrefersToKeepContentVisible:(bool)arg1;
- (void)setPrefersToSuppressPulse:(bool)arg1;
- (void)setSystemImageName:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setVerticalOffsetInPixels:(double)arg1;

@end
