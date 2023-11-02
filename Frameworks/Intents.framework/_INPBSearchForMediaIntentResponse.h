
@interface _INPBSearchForMediaIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForMediaIntentResponse> {
    struct { }  _has;
    NSArray * _mediaItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *mediaItems;
@property (nonatomic, readonly) unsigned long long mediaItemsCount;
@property (readonly) Class superclass;

+ (Class)mediaItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaItems;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end
