
@interface _INPBUpdateMediaAffinityIntent : PBCodable <NSCopying, NSSecureCoding, _INPBUpdateMediaAffinityIntent> {
    int  _affinityType;
    struct { 
        unsigned int affinityType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _mediaItems;
    _INPBMediaSearch * _mediaSearch;
    _INPBPrivateUpdateMediaAffinityIntentData * _privateUpdateMediaAffinityIntentData;
}

@property (nonatomic) int affinityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAffinityType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasMediaSearch;
@property (nonatomic, readonly) bool hasPrivateUpdateMediaAffinityIntentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *mediaItems;
@property (nonatomic, readonly) unsigned long long mediaItemsCount;
@property (nonatomic, retain) _INPBMediaSearch *mediaSearch;
@property (nonatomic, retain) _INPBPrivateUpdateMediaAffinityIntentData *privateUpdateMediaAffinityIntentData;
@property (readonly) Class superclass;

+ (Class)mediaItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAffinityType:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (int)affinityType;
- (id)affinityTypeAsString:(int)arg1;
- (void)clearMediaItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAffinityType;
- (bool)hasIntentMetadata;
- (bool)hasMediaSearch;
- (bool)hasPrivateUpdateMediaAffinityIntentData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)mediaItems;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (id)mediaSearch;
- (id)privateUpdateMediaAffinityIntentData;
- (bool)readFrom:(id)arg1;
- (void)setAffinityType:(int)arg1;
- (void)setHasAffinityType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (void)setPrivateUpdateMediaAffinityIntentData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
