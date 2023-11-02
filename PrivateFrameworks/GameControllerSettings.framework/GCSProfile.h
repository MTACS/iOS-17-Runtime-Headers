
@interface GCSProfile : NSObject <GCSJSONSerializable, NSSecureCoding> {
    bool  _baseProfile;
    bool  _customizable;
    long long  _doublePressShareGesture;
    NSDictionary * _elementMappings;
    NSString * _gameBundleIdentifier;
    bool  _hapticFeedbackOverride;
    double  _hapticStrength;
    long long  _lightbarColor;
    bool  _lightbarCustomColorEnabled;
    bool  _lightbarOverride;
    long long  _longPressShareGesture;
    NSDate * _modifiedDate;
    NSString * _name;
    NSString * _persistentControllerIdentifier;
    NSString * _sfSymbolsName;
    NSUUID * _uuid;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (getter=isBaseProfile, nonatomic, readonly) bool baseProfile;
@property (nonatomic, readonly) bool customizable;
@property (nonatomic, readonly) long long doublePressShareGesture;
@property (nonatomic, readonly) NSDictionary *elementMappings;
@property (nonatomic, readonly) NSString *gameBundleIdentifier;
@property (nonatomic, readonly) bool hapticFeedbackOverride;
@property (nonatomic, readonly) double hapticStrength;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, readonly) long long lightbarColor;
@property (nonatomic, readonly) bool lightbarCustomColorEnabled;
@property (nonatomic, readonly) bool lightbarOverride;
@property (nonatomic, readonly) long long longPressShareGesture;
@property (nonatomic, readonly) NSDate *modifiedDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *persistentControllerIdentifier;
@property (nonatomic, readonly) NSString *sfSymbolsName;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings

+ (id)adhocProfileForController:(id)arg1 gameBundleIdentifier:(id)arg2;
+ (id)archivalClasses;
+ (long long)defaultDoublePressGesture;
+ (long long)defaultLongPressGesture;
+ (id)defaultProfile;
+ (id)defaultProfileUUID;
+ (id)elementMappingsFrom:(id)arg1 for:(id)arg2;
+ (id)newBaseProfile;
+ (id)profile;
+ (id)profileWithName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anonymizedCopy;
- (bool)customizable;
- (id)description;
- (long long)doublePressShareGesture;
- (id)elementMappings;
- (id)elementMappingsWithJSONDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gameBundleIdentifier;
- (bool)hapticFeedbackOverride;
- (double)hapticStrength;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2 persistentControllerIdentifier:(id)arg3 gameBundleIdentifier:(id)arg4 baseProfile:(bool)arg5 customizable:(bool)arg6 sfSymbolsName:(id)arg7 elementMappings:(id)arg8 hapticFeedbackOverride:(bool)arg9 hapticStrength:(double)arg10 doublePressShareGesture:(long long)arg11 longPressShareGesture:(long long)arg12 lightbarOverride:(bool)arg13 lightbarCustomColorEnabled:(bool)arg14 lightbarColor:(long long)arg15;
- (bool)isActive;
- (bool)isBaseProfile;
- (id)jsonObject;
- (long long)lightbarColor;
- (bool)lightbarCustomColorEnabled;
- (bool)lightbarOverride;
- (long long)longPressShareGesture;
- (id)modifiedDate;
- (id)name;
- (id)persistentControllerIdentifier;
- (id)sfSymbolsName;
- (id)uuid;

// Image: /System/Library/Frameworks/GameController.framework/GameController

- (id)directionPadMappingForPhysicalPress:(id)arg1;
- (id)elementMappingForPhysicalPress:(id)arg1;
- (id)logicalButtonForPhysicalPressOf:(id)arg1 onPhysicalInputProfile:(id)arg2;
- (id)logicalDirectionPadForPhysicalPressOf:(id)arg1 onPhysicalInputProfile:(id)arg2;
- (id)logicalElementForPhysicalPressOf:(id)arg1 onPhysicalInputProfile:(id)arg2;

@end
