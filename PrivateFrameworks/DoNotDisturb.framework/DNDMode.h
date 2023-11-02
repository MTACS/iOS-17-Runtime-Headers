
@interface DNDMode : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSString * _modeIdentifier;
    NSString * _name;
    long long  _semanticType;
    NSString * _symbolImageName;
    NSString * _tintColorName;
    unsigned long long  _visibility;
}

@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *modeIdentifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isPlaceholder, nonatomic) bool placeholder;
@property (nonatomic, readonly) long long semanticType;
@property (nonatomic, readonly, copy) NSURL *settingsURL;
@property (nonatomic, readonly, copy) NSURL *setupURL;
@property (nonatomic, readonly, copy) NSString *symbolImageName;
@property (nonatomic, readonly, copy) NSString *tintColorName;
@property (nonatomic, readonly) unsigned long long visibility;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (id)defaultMode;
+ (id)defaultTintColorName;
+ (unsigned long long)maxUIAddableModes;
+ (id)placeholderModeFromMode:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMode:(id)arg1;
- (id)_name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 modeIdentifier:(id)arg2 symbolImageName:(id)arg3 tintColorName:(id)arg4 semanticType:(long long)arg5;
- (id)initWithName:(id)arg1 modeIdentifier:(id)arg2 symbolImageName:(id)arg3 tintColorName:(id)arg4 semanticType:(long long)arg5 visibility:(unsigned long long)arg6 identifier:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (id)modeIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (long long)semanticType;
- (id)settingsURL;
- (id)setupURL;
- (id)symbolImageName;
- (id)tintColorName;
- (unsigned long long)visibility;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)modeForRecord:(id)arg1;

- (id)makeRecord;

@end
