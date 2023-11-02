
@interface LIGHTHOUSE_BITACORA_PROTOEventStatus : PBCodable <NSCopying> {
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int succeeded : 1; 
    }  _has;
    bool  _succeeded;
}

@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasSucceeded;
@property (nonatomic) bool succeeded;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasSucceeded;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasSucceeded:(bool)arg1;
- (void)setSucceeded:(bool)arg1;
- (bool)succeeded;
- (void)writeTo:(id)arg1;

@end
