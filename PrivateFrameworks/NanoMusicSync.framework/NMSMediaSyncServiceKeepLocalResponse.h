
@interface NMSMediaSyncServiceKeepLocalResponse : PBCodable <NSCopying> {
    int  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _validatorExceptions;
}

@property (nonatomic) int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) int*validatorExceptions;
@property (nonatomic, readonly) unsigned long long validatorExceptionsCount;

- (int)StringAsErrorCode:(id)arg1;
- (int)StringAsValidatorExceptions:(id)arg1;
- (void)addValidatorException:(int)arg1;
- (void)clearValidatorExceptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorCodeAsString:(int)arg1;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setValidatorExceptions:(int*)arg1 count:(unsigned long long)arg2;
- (int)validatorExceptionAtIndex:(unsigned long long)arg1;
- (int*)validatorExceptions;
- (id)validatorExceptionsAsString:(int)arg1;
- (unsigned long long)validatorExceptionsCount;
- (void)writeTo:(id)arg1;

@end
