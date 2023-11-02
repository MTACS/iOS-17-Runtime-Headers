
@interface UICellAccessoryMultiselect : UICellAccessory

@property (nonatomic, retain) UIColor *backgroundColor;

+ (bool)supportsSecureCoding;

- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(bool)arg1;
- (id)backgroundColor;
- (id)init;
- (void)setBackgroundColor:(id)arg1;

@end
