
@interface WFREPBAlertRequest : PBRequest <NSCopying> {
    WFREPBAlert * _alert;
    NSString * _associatedRunRequestIdentifier;
}

@property (nonatomic, retain) WFREPBAlert *alert;
@property (nonatomic, retain) NSString *associatedRunRequestIdentifier;

- (void).cxx_destruct;
- (id)alert;
- (id)associatedRunRequestIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlert:(id)arg1;
- (void)setAssociatedRunRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
