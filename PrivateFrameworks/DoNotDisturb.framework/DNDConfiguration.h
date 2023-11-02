
@interface DNDConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableDictionary * _allowedApplicationIdentifiers;
    NSMutableSet * _allowedWebApplicationIdentifiers;
    unsigned long long  _applicationConfigurationType;
    long long  _compatibilityVersion;
    NSMutableSet * _deniedApplicationIdentifiers;
    NSMutableSet * _deniedWebApplicationIdentifiers;
    unsigned long long  _hideApplicationBadges;
    unsigned long long  _minimumBreakthroughUrgency;
    DNDMutableSenderConfiguration * _senderConfiguration;
    unsigned long long  _senderConfigurationType;
    unsigned long long  _suppressionMode;
    unsigned long long  _suppressionType;
}

@property (nonatomic, readonly, copy) NSDictionary *allowedApplicationIdentifiers;
@property (nonatomic, copy) NSSet *allowedWebApplicationIdentifiers;
@property (nonatomic, readonly) unsigned long long applicationConfigurationType;
@property (nonatomic, readonly, copy) NSSet *applicationsWithExceptions;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly, copy) NSSet *contactsWithExceptions;
@property (nonatomic, readonly, copy) NSSet *deniedApplicationIdentifiers;
@property (nonatomic, copy) NSSet *deniedWebApplicationIdentifiers;
@property (nonatomic, readonly) unsigned long long hideApplicationBadges;
@property (nonatomic, readonly) unsigned long long minimumBreakthroughUrgency;
@property (nonatomic, readonly, copy) DNDBypassSettings *phoneCallBypassSettings;
@property (nonatomic, readonly) long long rawCompatibilityVersion;
@property (nonatomic, readonly, copy) DNDSenderConfiguration *senderConfiguration;
@property (nonatomic, readonly) unsigned long long senderConfigurationType;
@property (getter=isSupportedConfiguration, nonatomic, readonly) bool supportedConfiguration;
@property (nonatomic, readonly) unsigned long long suppressionMode;
@property (nonatomic, readonly) unsigned long long suppressionType;
@property (nonatomic, readonly) unsigned long long threadConfigurationType;
@property (nonatomic, readonly, copy) NSDictionary *threadsWithExceptions;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSSet *webApplicationsWithExceptions;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (unsigned long long)defaultConfigurationType;
+ (unsigned long long)defaultMinimumBreakthroughUrgency;
+ (unsigned long long)defaultSuppressionType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForRedacted:(bool)arg1;
- (unsigned long long)_exceptionForApplicationIdentifier:(id)arg1 thread:(id)arg2;
- (id)_initWithConfigurationType:(unsigned long long)arg1;
- (id)_initWithSuppressionType:(unsigned long long)arg1 suppressionMode:(unsigned long long)arg2 allowedApplicationIdentifiers:(id)arg3 deniedApplicationIdentifiers:(id)arg4 allowedWebApplicationIdentifiers:(id)arg5 deniedWebApplicationIdentifiers:(id)arg6 senderConfiguration:(id)arg7 minimumBreakthroughUrgency:(unsigned long long)arg8 hideApplicationBadges:(unsigned long long)arg9 compatibilityVersion:(long long)arg10 applicationConfigurationType:(unsigned long long)arg11 senderConfigurationType:(unsigned long long)arg12;
- (id)allowedApplicationIdentifiers;
- (id)allowedApplications;
- (id)allowedWebApplicationIdentifiers;
- (unsigned long long)applicationConfigurationType;
- (id)applicationsWithExceptions;
- (long long)compatibilityVersion;
- (id)contactsWithExceptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deniedApplicationIdentifiers;
- (id)deniedApplications;
- (id)deniedWebApplicationIdentifiers;
- (id)description;
- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)exceptionForApplication:(id)arg1;
- (unsigned long long)exceptionForApplication:(id)arg1 thread:(id)arg2;
- (unsigned long long)exceptionForApplicationIdentifier:(id)arg1;
- (unsigned long long)exceptionForApplicationIdentifier:(id)arg1 thread:(id)arg2;
- (unsigned long long)exceptionForContact:(id)arg1;
- (unsigned long long)exceptionForContactHandle:(id)arg1;
- (unsigned long long)exceptionForWebApplicationIdentifier:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hideApplicationBadges;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSupportedConfiguration;
- (void)log:(id)arg1 withPrefix:(id)arg2;
- (unsigned long long)minimumBreakthroughUrgency;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)phoneCallBypassSettings;
- (long long)rawCompatibilityVersion;
- (id)redactedDescription;
- (id)senderConfiguration;
- (unsigned long long)senderConfigurationType;
- (void)setAllowedWebApplicationIdentifiers:(id)arg1;
- (void)setDeniedWebApplicationIdentifiers:(id)arg1;
- (unsigned long long)suppressionMode;
- (unsigned long long)suppressionType;
- (unsigned long long)threadConfigurationType;
- (id)threadsWithExceptions;
- (unsigned long long)type;
- (id)webApplicationsWithExceptions;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)configurationForRecord:(id)arg1 secureRecord:(id)arg2;

- (id)makeRecord;
- (id)makeSecureRecord;

@end
