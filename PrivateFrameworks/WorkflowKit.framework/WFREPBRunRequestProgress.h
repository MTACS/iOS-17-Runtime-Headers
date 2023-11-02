
@interface WFREPBRunRequestProgress : PBCodable <NSCopying> {
    double  _progress;
    NSString * _runRequestIdentifier;
}

@property (nonatomic) double progress;
@property (nonatomic, retain) NSString *runRequestIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)progress;
- (bool)readFrom:(id)arg1;
- (id)runRequestIdentifier;
- (void)setProgress:(double)arg1;
- (void)setRunRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
