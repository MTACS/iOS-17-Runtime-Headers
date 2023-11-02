
@interface HFNamingComponents : NSObject {
    bool  _allowsEmptyNameTextField;
    bool  _allowsNullResettableName;
    id  _homeKitObject;
    bool  _isAccessory;
    bool  _isChildService;
    bool  _isDiscoveredAccessory;
    bool  _isMediaAccessoryOrStereoPair;
    bool  _isService;
    bool  _isServiceGroup;
    bool  _isTelevision;
}

@property (nonatomic) bool allowsEmptyNameTextField;
@property (nonatomic) bool allowsNullResettableName;
@property (nonatomic, readonly) NSString *defaultName;
@property (nonatomic, readonly) id homeKitObject;
@property (nonatomic) bool isAccessory;
@property (nonatomic) bool isChildService;
@property (nonatomic) bool isDiscoveredAccessory;
@property (nonatomic) bool isMediaAccessoryOrStereoPair;
@property (nonatomic) bool isService;
@property (nonatomic) bool isServiceGroup;
@property (nonatomic) bool isTelevision;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *placeholderText;
@property (nonatomic, readonly) NSString *textFieldDisplayText;

+ (id)namingComponentFromAccessory:(id)arg1;
+ (id)namingComponentFromDiscoveredAccessory:(id)arg1;
+ (id)namingComponentFromHomeKitObject:(id)arg1;
+ (id)namingComponentFromMediaProfile:(id)arg1;
+ (id)namingComponentFromMediaSystem:(id)arg1;
+ (id)namingComponentFromService:(id)arg1;
+ (id)namingComponentFromServiceGroup:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsEmptyNameTextField;
- (bool)allowsNullResettableName;
- (id)categoryName;
- (id)commitableNameForString:(id)arg1;
- (id)configuredName;
- (id)defaultName;
- (id)description;
- (id)homeKitObject;
- (id)homeKitSafeStringForString:(id)arg1;
- (id)initWithHomeKitObject:(id)arg1;
- (bool)isAccessory;
- (bool)isChildService;
- (bool)isDiscoveredAccessory;
- (bool)isMediaAccessoryOrStereoPair;
- (bool)isService;
- (bool)isServiceGroup;
- (bool)isTelevision;
- (id)name;
- (id)placeholderText;
- (id)roomName;
- (void)setAllowsEmptyNameTextField:(bool)arg1;
- (void)setAllowsNullResettableName:(bool)arg1;
- (void)setIsAccessory:(bool)arg1;
- (void)setIsChildService:(bool)arg1;
- (void)setIsDiscoveredAccessory:(bool)arg1;
- (void)setIsMediaAccessoryOrStereoPair:(bool)arg1;
- (void)setIsService:(bool)arg1;
- (void)setIsServiceGroup:(bool)arg1;
- (void)setIsTelevision:(bool)arg1;
- (id)textFieldDisplayText;

@end
