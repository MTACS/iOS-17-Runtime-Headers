
@interface _INPBAddMediaIntent : PBCodable <NSCopying, NSSecureCoding, _INPBAddMediaIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBMediaDestination * _mediaDestination;
    NSArray * _mediaItems;
    _INPBMediaSearch * _mediaSearch;
    _INPBPrivateAddMediaIntentData * _privateAddMediaIntentData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasMediaDestination;
@property (nonatomic, readonly) bool hasMediaSearch;
@property (nonatomic, readonly) bool hasPrivateAddMediaIntentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBMediaDestination *mediaDestination;
@property (nonatomic, copy) NSArray *mediaItems;
@property (nonatomic, readonly) unsigned long long mediaItemsCount;
@property (nonatomic, retain) _INPBMediaSearch *mediaSearch;
@property (nonatomic, retain) _INPBPrivateAddMediaIntentData *privateAddMediaIntentData;
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
- (bool)hasMediaDestination;
- (bool)hasMediaSearch;
- (bool)hasPrivateAddMediaIntentData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)mediaDestination;
- (id)mediaItems;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (id)mediaSearch;
- (id)privateAddMediaIntentData;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMediaDestination:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (void)setPrivateAddMediaIntentData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
