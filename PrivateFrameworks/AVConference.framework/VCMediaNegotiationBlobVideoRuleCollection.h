
@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {
    unsigned int  _formats;
    unsigned int  _formatsExt1;
    struct { 
        unsigned int formatsExt1 : 1; 
        unsigned int preferredFormat : 1; 
        unsigned int preferredFormatExt1 : 1; 
    }  _has;
    int  _operation;
    unsigned int  _preferredFormat;
    unsigned int  _preferredFormatExt1;
    int  _transport;
}

@property (nonatomic) unsigned int formats;
@property (nonatomic) unsigned int formatsExt1;
@property (nonatomic) bool hasFormatsExt1;
@property (nonatomic) bool hasPreferredFormat;
@property (nonatomic) bool hasPreferredFormatExt1;
@property (nonatomic) int operation;
@property (nonatomic) unsigned int preferredFormat;
@property (nonatomic) unsigned int preferredFormatExt1;
@property (nonatomic) int transport;

- (int)StringAsOperation:(id)arg1;
- (int)StringAsTransport:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)formats;
- (unsigned int)formatsExt1;
- (bool)hasFormatsExt1;
- (bool)hasPreferredFormat;
- (bool)hasPreferredFormatExt1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)operation;
- (id)operationAsString:(int)arg1;
- (unsigned int)preferredFormat;
- (unsigned int)preferredFormatExt1;
- (bool)readFrom:(id)arg1;
- (void)setFormats:(unsigned int)arg1;
- (void)setFormatsExt1:(unsigned int)arg1;
- (void)setHasFormatsExt1:(bool)arg1;
- (void)setHasPreferredFormat:(bool)arg1;
- (void)setHasPreferredFormatExt1:(bool)arg1;
- (void)setOperation:(int)arg1;
- (void)setPreferredFormat:(unsigned int)arg1;
- (void)setPreferredFormatExt1:(unsigned int)arg1;
- (void)setTransport:(int)arg1;
- (int)transport;
- (id)transportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
