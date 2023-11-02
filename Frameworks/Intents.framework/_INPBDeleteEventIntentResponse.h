
@interface _INPBDeleteEventIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBDeleteEventIntentResponse> {
    int  _confirmationReason;
    struct { 
        unsigned int confirmationReason : 1; 
    }  _has;
}

@property (nonatomic) int confirmationReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfirmationReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)StringAsConfirmationReason:(id)arg1;
- (int)confirmationReason;
- (id)confirmationReasonAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConfirmationReason;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfirmationReason:(int)arg1;
- (void)setHasConfirmationReason:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
