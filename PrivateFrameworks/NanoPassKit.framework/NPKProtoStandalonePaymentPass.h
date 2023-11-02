
@interface NPKProtoStandalonePaymentPass : PBCodable <NSCopying> {
    int  _activationState;
    NSString * _deviceAccountIdentifier;
    NSString * _deviceAccountNumberSuffix;
    NPKProtoStandalonePaymentApplication * _devicePrimaryPaymentApplication;
    struct { 
        unsigned int activationState : 1; 
    }  _has;
    NPKProtoStandalonePass * _pass;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryAccountNumberSuffix;
}

@property (nonatomic) int activationState;
@property (nonatomic, retain) NSString *deviceAccountIdentifier;
@property (nonatomic, retain) NSString *deviceAccountNumberSuffix;
@property (nonatomic, retain) NPKProtoStandalonePaymentApplication *devicePrimaryPaymentApplication;
@property (nonatomic) bool hasActivationState;
@property (nonatomic, readonly) bool hasDeviceAccountIdentifier;
@property (nonatomic, readonly) bool hasDeviceAccountNumberSuffix;
@property (nonatomic, readonly) bool hasDevicePrimaryPaymentApplication;
@property (nonatomic, readonly) bool hasPrimaryAccountIdentifier;
@property (nonatomic, readonly) bool hasPrimaryAccountNumberSuffix;
@property (nonatomic, retain) NPKProtoStandalonePass *pass;
@property (nonatomic, retain) NSString *primaryAccountIdentifier;
@property (nonatomic, retain) NSString *primaryAccountNumberSuffix;

- (void).cxx_destruct;
- (int)StringAsActivationState:(id)arg1;
- (int)activationState;
- (id)activationStateAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceAccountIdentifier;
- (id)deviceAccountNumberSuffix;
- (id)devicePrimaryPaymentApplication;
- (id)dictionaryRepresentation;
- (bool)hasActivationState;
- (bool)hasDeviceAccountIdentifier;
- (bool)hasDeviceAccountNumberSuffix;
- (bool)hasDevicePrimaryPaymentApplication;
- (bool)hasPrimaryAccountIdentifier;
- (bool)hasPrimaryAccountNumberSuffix;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pass;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (bool)readFrom:(id)arg1;
- (void)setActivationState:(int)arg1;
- (void)setDeviceAccountIdentifier:(id)arg1;
- (void)setDeviceAccountNumberSuffix:(id)arg1;
- (void)setDevicePrimaryPaymentApplication:(id)arg1;
- (void)setHasActivationState:(bool)arg1;
- (void)setPass:(id)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (void)writeTo:(id)arg1;

@end
