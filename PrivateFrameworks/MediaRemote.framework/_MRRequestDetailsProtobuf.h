
@interface _MRRequestDetailsProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int startDate : 1; 
        unsigned int qos : 1; 
        unsigned int userInitiated : 1; 
    }  _has;
    NSString * _name;
    unsigned int  _qos;
    NSString * _reason;
    NSString * _requestID;
    unsigned long long  _startDate;
    bool  _userInitiated;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasQos;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasUserInitiated;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int qos;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic) unsigned long long startDate;
@property (nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasQos;
- (bool)hasReason;
- (bool)hasRequestID;
- (bool)hasStartDate;
- (bool)hasUserInitiated;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)qos;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (id)requestID;
- (void)setHasQos:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasUserInitiated:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)setReason:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setStartDate:(unsigned long long)arg1;
- (void)setUserInitiated:(bool)arg1;
- (unsigned long long)startDate;
- (bool)userInitiated;
- (void)writeTo:(id)arg1;

@end
