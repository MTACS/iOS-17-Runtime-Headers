
@interface PKPassTileStateDefault : PKPassTileState {
    PKPassTileAccessory * _accessory;
    NSString * _body;
    PKPassTileAccessory * _secondaryAccessory;
    NSString * _title;
}

@property (nonatomic, retain) PKPassTileAccessory *accessory;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, retain) PKPassTileAccessory *secondaryAccessory;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_setupWithDictionary:(id)arg1;
- (id)accessory;
- (id)body;
- (id)createResolvedStateWithBundle:(id)arg1 privateBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToUnresolvedState:(id)arg1;
- (id)secondaryAccessory;
- (void)setAccessory:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setSecondaryAccessory:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
