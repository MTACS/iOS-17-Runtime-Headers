
@interface _INPBStartPhotoPlaybackIntent : PBCodable <NSCopying, NSSecureCoding, _INPBStartPhotoPlaybackIntent> {
    _INPBString * _albumName;
    _INPBDateTimeRange * _dateCreated;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _excludedAttributes;
    struct { }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _includedAttributes;
    _INPBIntentMetadata * _intentMetadata;
    _INPBLocation * _locationCreated;
    _INPBContactList * _peopleInPhoto;
    _INPBStringList * _searchTerm;
}

@property (nonatomic, retain) _INPBString *albumName;
@property (nonatomic, retain) _INPBDateTimeRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int*excludedAttributes;
@property (nonatomic, readonly) unsigned long long excludedAttributesCount;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic, readonly) bool hasDateCreated;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLocationCreated;
@property (nonatomic, readonly) bool hasPeopleInPhoto;
@property (nonatomic, readonly) bool hasSearchTerm;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int*includedAttributes;
@property (nonatomic, readonly) unsigned long long includedAttributesCount;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBLocation *locationCreated;
@property (nonatomic, retain) _INPBContactList *peopleInPhoto;
@property (nonatomic, retain) _INPBStringList *searchTerm;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsExcludedAttributes:(id)arg1;
- (int)StringAsIncludedAttributes:(id)arg1;
- (void)addExcludedAttribute:(int)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (id)albumName;
- (void)clearExcludedAttributes;
- (void)clearIncludedAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (int*)excludedAttributes;
- (id)excludedAttributesAsString:(int)arg1;
- (unsigned long long)excludedAttributesCount;
- (bool)hasAlbumName;
- (bool)hasDateCreated;
- (bool)hasIntentMetadata;
- (bool)hasLocationCreated;
- (bool)hasPeopleInPhoto;
- (bool)hasSearchTerm;
- (unsigned long long)hash;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (int*)includedAttributes;
- (id)includedAttributesAsString:(int)arg1;
- (unsigned long long)includedAttributesCount;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)locationCreated;
- (id)peopleInPhoto;
- (bool)readFrom:(id)arg1;
- (id)searchTerm;
- (void)setAlbumName:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setExcludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIncludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIntentMetadata:(id)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)writeTo:(id)arg1;

@end
