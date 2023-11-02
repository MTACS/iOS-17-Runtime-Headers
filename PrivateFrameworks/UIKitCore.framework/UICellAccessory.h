
@interface UICellAccessory : NSObject <NSCopying, NSSecureCoding> {
    UIColor * _backgroundColor;
    long long  _displayedState;
    bool  _hidden;
    double  _reservedLayoutWidth;
    UIColor * _tintColor;
}

@property (setter=_setBackgroundColor:, nonatomic, retain) UIColor *_backgroundColor;
@property (nonatomic) long long displayedState;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=_identifier, nonatomic, readonly) NSString *identifier;
@property (getter=_isSystemType, nonatomic, readonly) bool isSystemType;
@property (nonatomic) double reservedLayoutWidth;
@property (getter=_systemType, nonatomic, readonly) long long systemType;
@property (nonatomic, retain) UIColor *tintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (bool)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg1;
- (long long)_compare:(id)arg1;
- (long long)_defaultPlacementForHeader:(bool)arg1;
- (id)_identifier;
- (bool)_isDisplayedForEditingState:(bool)arg1;
- (bool)_isSystemType;
- (void)_setBackgroundColor:(id)arg1;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)displayedState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (double)reservedLayoutWidth;
- (void)setDisplayedState:(long long)arg1;
- (void)setHidden:(bool)arg1;
- (void)setReservedLayoutWidth:(double)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
