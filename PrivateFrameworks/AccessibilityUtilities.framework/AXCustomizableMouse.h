
@interface AXCustomizableMouse : NSObject <NSSecureCoding> {
    NSMutableDictionary * _buttonMap;
    NSString * _identifier;
    NSString * _name;
    long long  _productId;
    long long  _vendorId;
}

@property (nonatomic, retain) NSMutableDictionary *buttonMap;
@property (nonatomic, readonly) NSArray *buttonsWithCustomActions;
@property (nonatomic, readonly) bool customActionsRequireAssistiveTouch;
@property (nonatomic, readonly) bool hasCustomActions;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long productId;
@property (nonatomic, readonly) long long vendorId;

+ (id)_existingMouseForIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3;
+ (id)_newOrExistingMouseForIdentifier:(id)arg1 name:(id)arg2 vendorId:(id)arg3 productId:(id)arg4;
+ (id)deserialize:(id)arg1;
+ (id)mouseForHIDDevice:(struct __IOHIDDevice { }*)arg1;
+ (id)mouseForHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
+ (id)serialize:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttonMap;
- (id)buttonsWithCustomActions;
- (id)customActionForButtonNumber:(long long)arg1;
- (bool)customActionsRequireAssistiveTouch;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCustomActions;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 vendorId:(long long)arg3 productId:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3;
- (bool)isEqualToMouse:(id)arg1;
- (id)name;
- (long long)productId;
- (void)setButtonMap:(id)arg1;
- (void)setCustomAction:(id)arg1 forButtonNumber:(long long)arg2;
- (void)setDefaultActionForButtonNumber:(long long)arg1;
- (long long)vendorId;

@end
