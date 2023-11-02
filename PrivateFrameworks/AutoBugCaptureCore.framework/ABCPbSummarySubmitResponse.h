
@interface ABCPbSummarySubmitResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    NSString * _message;
    NSString * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic, readonly) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessage;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)writeTo:(id)arg1;

@end
