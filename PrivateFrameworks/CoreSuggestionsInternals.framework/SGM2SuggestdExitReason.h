
@interface SGM2SuggestdExitReason : PBCodable <NSCopying> {
    unsigned int  _exitCode;
    struct { 
        unsigned int exitCode : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic) unsigned int exitCode;
@property (nonatomic) bool hasExitCode;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)exitCode;
- (bool)hasExitCode;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExitCode:(unsigned int)arg1;
- (void)setHasExitCode:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
