
@interface GCSController : NSObject <GCSJSONSerializable, NSCopying, NSSecureCoding> {
    GCSProfile * _baseProfile;
    NSDictionary * _buttons;
    NSDictionary * _dpads;
    bool  _hidden;
    NSString * _logoSfSymbolsName;
    NSDictionary * _miscellaneous;
    NSDate * _modifiedDate;
    NSString * _name;
    NSString * _persistentIdentifier;
    NSString * _productCategoryKey;
    GCSElement * _shareButton;
    bool  _supportsHaptics;
    bool  _supportsLight;
}

@property (nonatomic, readonly) GCSProfile *baseProfile;
@property (nonatomic, readonly) NSDictionary *buttons;
@property (nonatomic, readonly) NSDictionary *dpads;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedProductCategory;
@property (nonatomic, readonly) NSString *logoSfSymbolsName;
@property (nonatomic, readonly) NSDictionary *miscellaneous;
@property (nonatomic, readonly) NSDate *modifiedDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, readonly) NSString *productCategoryKey;
@property (nonatomic, readonly) GCSElement *shareButton;
@property (nonatomic, readonly) bool supportsHaptics;
@property (nonatomic, readonly) bool supportsLight;

// Image: /System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings

+ (id)archivalClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allButtons;
- (id)allDpads;
- (id)allElements;
- (id)baseProfile;
- (id)buttons;
- (id)copyWithBaseProfile:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dpads;
- (void)encodeWithCoder:(id)arg1;
- (id)id;
- (id)initDummy;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithName:(id)arg1 persistentIdentifier:(id)arg2 productCategoryKey:(id)arg3 hidden:(bool)arg4 shareButton:(id)arg5 buttons:(id)arg6 dpads:(id)arg7 logoSfSymbolsName:(id)arg8 supportsHaptics:(bool)arg9 supportsLight:(bool)arg10 baseProfile:(id)arg11 miscellaneous:(id)arg12;
- (bool)isHidden;
- (id)jsonObject;
- (id)localizedName;
- (id)localizedProductCategory;
- (id)logoSfSymbolsName;
- (id)miscellaneous;
- (id)modifiedDate;
- (id)name;
- (id)persistentIdentifier;
- (id)productCategoryKey;
- (id)shareButton;
- (bool)supportsHaptics;
- (bool)supportsLight;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (id)generateElementDictionaryFromElements:(id)arg1;
+ (id)productCategoryLocalizationKeyForProductCategory:(id)arg1;

- (id)initWithController:(id)arg1;

@end
