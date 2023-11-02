
@interface _INPBOpenSettingIntent : PBCodable <NSCopying, NSSecureCoding, _INPBOpenSettingIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _searchQuery;
    _INPBSettingMetadata * _settingMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSearchQuery;
@property (nonatomic, readonly) bool hasSettingMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBDataString *searchQuery;
@property (nonatomic, retain) _INPBSettingMetadata *settingMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasSearchQuery;
- (bool)hasSettingMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchQuery;
- (void)setIntentMetadata:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (id)settingMetadata;
- (void)writeTo:(id)arg1;

@end
