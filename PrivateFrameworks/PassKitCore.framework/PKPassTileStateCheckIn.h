
@interface PKPassTileStateCheckIn : PKPassTileState {
    PKDateContainer * _availableFrom;
    PKPassTileAccessory * _secondaryAccessory;
}

@property (nonatomic, retain) PKDateContainer *availableFrom;
@property (nonatomic, retain) PKPassTileAccessory *secondaryAccessory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_setupWithDictionary:(id)arg1;
- (id)availableFrom;
- (id)createResolvedStateWithBundle:(id)arg1 privateBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToUnresolvedState:(id)arg1;
- (id)secondaryAccessory;
- (void)setAvailableFrom:(id)arg1;
- (void)setSecondaryAccessory:(id)arg1;

@end
