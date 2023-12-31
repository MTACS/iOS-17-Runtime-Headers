
@interface NTPBResourceRecord : PBCodable <NSCopying> {
    NTPBRecordBase * _base;
    NSString * _encoding;
    NSString * _mimeType;
    NSString * _url;
}

@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSString *encoding;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasEncoding;
@property (nonatomic, readonly) bool hasMimeType;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic, retain) NSString *url;

- (id)base;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encoding;
- (bool)hasBase;
- (bool)hasEncoding;
- (bool)hasMimeType;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mimeType;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setEncoding:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)writeTo:(id)arg1;

@end
