
@interface AWDMailMessageBody : PBCodable <NSCopying> {
    struct { 
        unsigned int totalTextSize : 1; 
    }  _has;
    NSString * _mimeSubtype;
    NSString * _mimeType;
    unsigned long long  _totalTextSize;
}

@property (nonatomic, readonly) bool hasMimeSubtype;
@property (nonatomic, readonly) bool hasMimeType;
@property (nonatomic) bool hasTotalTextSize;
@property (nonatomic, retain) NSString *mimeSubtype;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic) unsigned long long totalTextSize;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMimeSubtype;
- (bool)hasMimeType;
- (bool)hasTotalTextSize;
- (unsigned long long)hash;
- (id)initWithMIMEBody:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mimeSubtype;
- (id)mimeType;
- (bool)readFrom:(id)arg1;
- (void)setHasTotalTextSize:(bool)arg1;
- (void)setMimeSubtype:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setTotalTextSize:(unsigned long long)arg1;
- (unsigned long long)totalTextSize;
- (void)writeTo:(id)arg1;

@end
