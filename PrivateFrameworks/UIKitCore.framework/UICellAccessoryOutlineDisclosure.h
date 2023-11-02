
@interface UICellAccessoryOutlineDisclosure : UICellAccessory {
    UIImage * __customImage;
    id /* block */  _actionHandler;
    long long  _style;
}

@property (getter=_customImage, setter=_setCustomImage:, nonatomic, retain) UIImage *_customImage;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) double rotationAngle;
@property (nonatomic) long long style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg1;
- (id)_customImage;
- (id)_identifier;
- (void)_setCustomImage:(id)arg1;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(bool)arg1;
- (id /* block */)actionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)rotationAngle;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
