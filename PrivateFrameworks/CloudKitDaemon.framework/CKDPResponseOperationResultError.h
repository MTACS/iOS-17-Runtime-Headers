
@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {
    CKDPResponseOperationResultErrorAuxiliaryError * _auxiliaryError;
    CKDPResponseOperationResultErrorClient * _clientError;
    NSString * _errorDescription;
    NSString * _errorInternal;
    NSString * _errorKey;
    CKDPResponseOperationResultErrorExtension * _extensionError;
    struct { 
        unsigned int retryAfterSeconds : 1; 
    }  _has;
    int  _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer * _serverError;
}

@property (nonatomic, retain) CKDPResponseOperationResultErrorAuxiliaryError *auxiliaryError;
@property (nonatomic, retain) CKDPResponseOperationResultErrorClient *clientError;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) NSString *errorInternal;
@property (nonatomic, retain) NSString *errorKey;
@property (nonatomic, retain) CKDPResponseOperationResultErrorExtension *extensionError;
@property (nonatomic, readonly) bool hasAuxiliaryError;
@property (nonatomic, readonly) bool hasClientError;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasErrorInternal;
@property (nonatomic, readonly) bool hasErrorKey;
@property (nonatomic, readonly) bool hasExtensionError;
@property (nonatomic) bool hasRetryAfterSeconds;
@property (nonatomic, readonly) bool hasServerError;
@property (nonatomic) int retryAfterSeconds;
@property (nonatomic, retain) CKDPResponseOperationResultErrorServer *serverError;

- (void).cxx_destruct;
- (id)auxiliaryError;
- (id)clientError;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (id)errorInternal;
- (id)errorKey;
- (id)extensionError;
- (bool)hasAuxiliaryError;
- (bool)hasClientError;
- (bool)hasErrorDescription;
- (bool)hasErrorInternal;
- (bool)hasErrorKey;
- (bool)hasExtensionError;
- (bool)hasRetryAfterSeconds;
- (bool)hasServerError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)retryAfterSeconds;
- (id)serverError;
- (void)setAuxiliaryError:(id)arg1;
- (void)setClientError:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorInternal:(id)arg1;
- (void)setErrorKey:(id)arg1;
- (void)setExtensionError:(id)arg1;
- (void)setHasRetryAfterSeconds:(bool)arg1;
- (void)setRetryAfterSeconds:(int)arg1;
- (void)setServerError:(id)arg1;
- (void)writeTo:(id)arg1;

@end
