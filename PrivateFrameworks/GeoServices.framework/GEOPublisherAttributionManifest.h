
@interface GEOPublisherAttributionManifest : PBCodable <NSCopying> {
    NSMutableDictionary * _publisherAttributionSources;
}

@property (nonatomic, retain) NSMutableDictionary *publisherAttributionSources;

+ (bool)isValid:(id)arg1;
+ (Class)publisherAttributionSourcesType;

- (void).cxx_destruct;
- (void)clearPublisherAttributionSources;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)enumeratePublisherAttributionSourcesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)publisherAttributionSources;
- (unsigned long long)publisherAttributionSourcesCount;
- (id)publisherAttributionSourcesForKey:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPublisherAttributionSources:(id)arg1;
- (void)setPublisherAttributionSourcesValue:(id)arg1 forKey:(id)arg2;
- (void)writeTo:(id)arg1;

@end
