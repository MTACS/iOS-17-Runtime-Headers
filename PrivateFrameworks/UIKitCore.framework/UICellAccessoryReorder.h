
@interface UICellAccessoryReorder : UICellAccessory {
    bool  _showsVerticalSeparator;
}

@property (nonatomic) bool showsVerticalSeparator;

+ (bool)supportsSecureCoding;

- (bool)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg1;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setShowsVerticalSeparator:(bool)arg1;
- (bool)showsVerticalSeparator;

@end
