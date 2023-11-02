
@interface _INPBSetProfileInCarIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetProfileInCarIntent> {
    _INPBDataString * _carName;
    bool  _defaultProfile;
    struct { 
        unsigned int defaultProfile : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBString * _profileName;
    _INPBInteger * _profileNumber;
}

@property (nonatomic, retain) _INPBDataString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defaultProfile;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCarName;
@property (nonatomic) bool hasDefaultProfile;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasProfileName;
@property (nonatomic, readonly) bool hasProfileNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBString *profileName;
@property (nonatomic, retain) _INPBInteger *profileNumber;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultProfile;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCarName;
- (bool)hasDefaultProfile;
- (bool)hasIntentMetadata;
- (bool)hasProfileName;
- (bool)hasProfileNumber;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)profileName;
- (id)profileNumber;
- (bool)readFrom:(id)arg1;
- (void)setCarName:(id)arg1;
- (void)setDefaultProfile:(bool)arg1;
- (void)setHasDefaultProfile:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProfileName:(id)arg1;
- (void)setProfileNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
