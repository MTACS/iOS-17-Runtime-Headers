
@interface _ICLLProtocolMessage : PBCodable <NSCopying> {
    _ICLLActionMessage * _action;
    _ICLLCommandMessage * _command;
    _ICLLErrorMessage * _error;
    struct { 
        unsigned int type : 1; 
    }  _has;
    _ICLLQueryMessage * _query;
    NSString * _traceId;
    int  _type;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
