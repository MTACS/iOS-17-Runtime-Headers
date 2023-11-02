
@interface AFHomeAccessoryInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSString * _assistantIdentifier;
    NSString * _categoryType;
    bool  _hasActiveThirdPartyMusicSubscription;
    bool  _isSpeaker;
    NSUUID * _loggingUniqueIdentifier;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    NSString * _roomName;
    long long  _schemaCategoryType;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *assistantIdentifier;
@property (nonatomic, readonly, copy) NSString *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActiveThirdPartyMusicSubscription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSpeaker;
@property (nonatomic, readonly, copy) NSUUID *loggingUniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *roomName;
@property (nonatomic, readonly) long long schemaCategoryType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)assistantIdentifier;
- (id)buildDictionaryRepresentation;
- (id)categoryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasActiveThirdPartyMusicSubscription;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 loggingUniqueIdentifier:(id)arg2 name:(id)arg3 model:(id)arg4 roomName:(id)arg5 assistantIdentifier:(id)arg6 isSpeaker:(bool)arg7 hasActiveThirdPartyMusicSubscription:(bool)arg8 manufacturer:(id)arg9 categoryType:(id)arg10 schemaCategoryType:(long long)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isSpeaker;
- (id)loggingUniqueIdentifier;
- (id)manufacturer;
- (id)model;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)name;
- (id)roomName;
- (long long)schemaCategoryType;
- (id)uniqueIdentifier;

@end
