
@interface _INPBAppNames : PBCodable <NSCopying, NSSecureCoding, _INPBAppNames> {
    NSString * _appName;
    NSString * _axSpokenName;
    NSString * _displayName;
    struct { }  _has;
    NSString * _spotlightName;
}

@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *axSpokenName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) bool hasAppName;
@property (nonatomic, readonly) bool hasAxSpokenName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasSpotlightName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *spotlightName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appName;
- (id)axSpokenName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAppName;
- (bool)hasAxSpokenName;
- (bool)hasDisplayName;
- (bool)hasSpotlightName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAxSpokenName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSpotlightName:(id)arg1;
- (id)spotlightName;
- (void)writeTo:(id)arg1;

@end
