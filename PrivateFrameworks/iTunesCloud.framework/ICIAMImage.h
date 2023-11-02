
@interface ICIAMImage : PBCodable <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    }  _has;
    unsigned int  _height;
    NSString * _identifier;
    NSString * _uRL;
    unsigned int  _width;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasURL;
@property (nonatomic) bool hasWidth;
@property (nonatomic) unsigned int height;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *uRL;
@property (nonatomic) unsigned int width;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasIdentifier;
- (bool)hasURL;
- (bool)hasWidth;
- (unsigned long long)hash;
- (unsigned int)height;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)uRL;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
