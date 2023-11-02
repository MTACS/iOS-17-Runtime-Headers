
@interface _INPBIntentSlotResolutionResult : PBCodable <NSCopying, NSSecureCoding, _INPBIntentSlotResolutionResult> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    _INPBPayloadConfirmation * _payloadConfirmation;
    _INPBPayloadNeedsDisambiguation * _payloadNeedsDisambiguation;
    _INPBPayloadNeedsExecuteIntent * _payloadNeedsExecuteIntent;
    _INPBPayloadNeedsValue * _payloadNeedsValue;
    _INPBPayloadSuccess * _payloadSuccess;
    _INPBPayloadUnsupported * _payloadUnsupported;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPayloadConfirmation;
@property (nonatomic, readonly) bool hasPayloadNeedsDisambiguation;
@property (nonatomic, readonly) bool hasPayloadNeedsExecuteIntent;
@property (nonatomic, readonly) bool hasPayloadNeedsValue;
@property (nonatomic, readonly) bool hasPayloadSuccess;
@property (nonatomic, readonly) bool hasPayloadUnsupported;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBPayloadConfirmation *payloadConfirmation;
@property (nonatomic, retain) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation;
@property (nonatomic, retain) _INPBPayloadNeedsExecuteIntent *payloadNeedsExecuteIntent;
@property (nonatomic, retain) _INPBPayloadNeedsValue *payloadNeedsValue;
@property (nonatomic, retain) _INPBPayloadSuccess *payloadSuccess;
@property (nonatomic, retain) _INPBPayloadUnsupported *payloadUnsupported;
@property (readonly) Class superclass;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPayloadConfirmation;
- (bool)hasPayloadNeedsDisambiguation;
- (bool)hasPayloadNeedsExecuteIntent;
- (bool)hasPayloadNeedsValue;
- (bool)hasPayloadSuccess;
- (bool)hasPayloadUnsupported;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadConfirmation;
- (id)payloadNeedsDisambiguation;
- (id)payloadNeedsExecuteIntent;
- (id)payloadNeedsValue;
- (id)payloadSuccess;
- (id)payloadUnsupported;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPayloadConfirmation:(id)arg1;
- (void)setPayloadNeedsDisambiguation:(id)arg1;
- (void)setPayloadNeedsExecuteIntent:(id)arg1;
- (void)setPayloadNeedsValue:(id)arg1;
- (void)setPayloadSuccess:(id)arg1;
- (void)setPayloadUnsupported:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
