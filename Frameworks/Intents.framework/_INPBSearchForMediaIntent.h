
@interface _INPBSearchForMediaIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForMediaIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _mediaItems;
    _INPBMediaSearch * _mediaSearch;
    _INPBPrivateSearchForMediaIntentData * _privateSearchForMediaIntentData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasMediaSearch;
@property (nonatomic, readonly) bool hasPrivateSearchForMediaIntentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *mediaItems;
@property (nonatomic, readonly) unsigned long long mediaItemsCount;
@property (nonatomic, retain) _INPBMediaSearch *mediaSearch;
@property (nonatomic, retain) _INPBPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;
@property (readonly) Class superclass;

+ (Class)mediaItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasMediaSearch;
- (bool)hasPrivateSearchForMediaIntentData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)mediaItems;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (id)mediaSearch;
- (id)privateSearchForMediaIntentData;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (void)setPrivateSearchForMediaIntentData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
