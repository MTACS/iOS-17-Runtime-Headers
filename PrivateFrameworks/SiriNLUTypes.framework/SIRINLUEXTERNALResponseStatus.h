
@interface SIRINLUEXTERNALResponseStatus : PBCodable <NSCopying> {
    int  _code;
    NSString * _descriptionA;
    struct { 
        unsigned int code : 1; 
    }  _has;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *descriptionA;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasDescriptionA;

- (void).cxx_destruct;
- (int)StringAsCode:(id)arg1;
- (int)code;
- (id)codeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionA;
- (id)dictionaryRepresentation;
- (bool)hasCode;
- (bool)hasDescriptionA;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setDescriptionA:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
