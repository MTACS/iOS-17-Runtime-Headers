
@interface _MRSendCommandResultStatusProtobuf : PBCodable <NSCopying> {
    NSData * _customData;
    NSString * _customDataType;
    _MRSendCommandResultHandlerDialogProtobuf * _dialog;
    _MRErrorProtobuf * _error;
    struct { 
        unsigned int statusCode : 1; 
        unsigned int type : 1; 
    }  _has;
    int  _statusCode;
    int  _type;
}

@property (nonatomic, retain) NSData *customData;
@property (nonatomic, retain) NSString *customDataType;
@property (nonatomic, retain) _MRSendCommandResultHandlerDialogProtobuf *dialog;
@property (nonatomic, retain) _MRErrorProtobuf *error;
@property (nonatomic, readonly) bool hasCustomData;
@property (nonatomic, readonly) bool hasCustomDataType;
@property (nonatomic, readonly) bool hasDialog;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic) bool hasType;
@property (nonatomic) int statusCode;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customData;
- (id)customDataType;
- (id)description;
- (id)dialog;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasCustomData;
- (bool)hasCustomDataType;
- (bool)hasDialog;
- (bool)hasError;
- (bool)hasStatusCode;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCustomData:(id)arg1;
- (void)setCustomDataType:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setType:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
