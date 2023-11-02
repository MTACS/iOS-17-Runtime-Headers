
@interface _INPBIdentifyIncomingCallerIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBIdentifyIncomingCallerIntentResponse> {
    NSArray * _callRecords;
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    int  _statusCode;
}

@property (nonatomic, copy) NSArray *callRecords;
@property (nonatomic, readonly) unsigned long long callRecordsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStatusCode;
@property (readonly) unsigned long long hash;
@property (nonatomic) int statusCode;
@property (readonly) Class superclass;

+ (Class)callRecordsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addCallRecords:(id)arg1;
- (id)callRecords;
- (id)callRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callRecordsCount;
- (void)clearCallRecords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallRecords:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
