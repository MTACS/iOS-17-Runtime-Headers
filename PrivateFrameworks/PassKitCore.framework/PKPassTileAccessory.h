
@interface PKPassTileAccessory : NSObject <NSSecureCoding> {
    bool  _resolved;
    long long  _type;
}

@property (nonatomic, readonly) PKPassTileAccessoryButton *accessoryTypeButton;
@property (nonatomic, readonly) PKPassTileAccessoryImage *accessoryTypeImage;
@property (nonatomic, readonly) PKPassTileAccessorySpinner *accessoryTypeSpinner;
@property (getter=isResolved, nonatomic, readonly) bool resolved;
@property (nonatomic, readonly) long long type;

+ (id)_createForDictionary:(id)arg1;
+ (id)_createForType:(long long)arg1 resolved:(bool)arg2;
+ (bool)supportsSecureCoding;

- (bool)_isEqual:(id)arg1;
- (bool)_setupWithDictionary:(id)arg1;
- (id)accessoryTypeButton;
- (id)accessoryTypeImage;
- (id)accessoryTypeSpinner;
- (id)createResolvedAccessoryWithBundle:(id)arg1 privateBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUnresolvedAccessory:(id)arg1;
- (bool)isResolved;
- (long long)type;

@end
