
@interface _INPBIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBIntentResponse> {
    struct { 
        unsigned int requiresAuthentication : 1; 
        unsigned int requiresProtectedData : 1; 
        unsigned int type : 1; 
    }  _has;
    _INPBIntentResponsePayloadFailure * _payloadFailure;
    _INPBIntentResponsePayloadSuccess * _payloadSuccess;
    bool  _requiresAuthentication;
    bool  _requiresProtectedData;
    int  _type;
    _INPBUserActivity * _userActivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPayloadFailure;
@property (nonatomic, readonly) bool hasPayloadSuccess;
@property (nonatomic) bool hasRequiresAuthentication;
@property (nonatomic) bool hasRequiresProtectedData;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUserActivity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentResponsePayloadFailure *payloadFailure;
@property (nonatomic, retain) _INPBIntentResponsePayloadSuccess *payloadSuccess;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic) bool requiresProtectedData;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _INPBUserActivity *userActivity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPayloadFailure;
- (bool)hasPayloadSuccess;
- (bool)hasRequiresAuthentication;
- (bool)hasRequiresProtectedData;
- (bool)hasType;
- (bool)hasUserActivity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadFailure;
- (id)payloadSuccess;
- (bool)readFrom:(id)arg1;
- (bool)requiresAuthentication;
- (bool)requiresProtectedData;
- (void)setHasRequiresAuthentication:(bool)arg1;
- (void)setHasRequiresProtectedData:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPayloadFailure:(id)arg1;
- (void)setPayloadSuccess:(id)arg1;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setRequiresProtectedData:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setUserActivity:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)userActivity;
- (void)writeTo:(id)arg1;

@end
