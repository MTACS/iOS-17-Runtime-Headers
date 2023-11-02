
@interface HDCodableTinkerPairingRequest : PBRequest <NSCopying> {
    long long  _guardianDSID;
    NSString * _guardianFirstName;
    NSString * _guardianIcloudIdentifier;
    NSString * _guardianLastName;
    struct { 
        unsigned int guardianDSID : 1; 
        unsigned int setupType : 1; 
    }  _has;
    NSData * _profileIdentifier;
    NSString * _requestIdentifier;
    int  _setupType;
    NSString * _tinkerFirstName;
    NSString * _tinkerLastName;
}

@property (nonatomic) long long guardianDSID;
@property (nonatomic, retain) NSString *guardianFirstName;
@property (nonatomic, retain) NSString *guardianIcloudIdentifier;
@property (nonatomic, retain) NSString *guardianLastName;
@property (nonatomic) bool hasGuardianDSID;
@property (nonatomic, readonly) bool hasGuardianFirstName;
@property (nonatomic, readonly) bool hasGuardianIcloudIdentifier;
@property (nonatomic, readonly) bool hasGuardianLastName;
@property (nonatomic, readonly) bool hasProfileIdentifier;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic) bool hasSetupType;
@property (nonatomic, readonly) bool hasTinkerFirstName;
@property (nonatomic, readonly) bool hasTinkerLastName;
@property (nonatomic, retain) NSData *profileIdentifier;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) int setupType;
@property (nonatomic, retain) NSString *tinkerFirstName;
@property (nonatomic, retain) NSString *tinkerLastName;

- (void).cxx_destruct;
- (int)StringAsSetupType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)guardianDSID;
- (id)guardianFirstName;
- (id)guardianIcloudIdentifier;
- (id)guardianLastName;
- (bool)hasGuardianDSID;
- (bool)hasGuardianFirstName;
- (bool)hasGuardianIcloudIdentifier;
- (bool)hasGuardianLastName;
- (bool)hasProfileIdentifier;
- (bool)hasRequestIdentifier;
- (bool)hasSetupType;
- (bool)hasTinkerFirstName;
- (bool)hasTinkerLastName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)profileIdentifier;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setGuardianDSID:(long long)arg1;
- (void)setGuardianFirstName:(id)arg1;
- (void)setGuardianIcloudIdentifier:(id)arg1;
- (void)setGuardianLastName:(id)arg1;
- (void)setHasGuardianDSID:(bool)arg1;
- (void)setHasSetupType:(bool)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSetupType:(int)arg1;
- (void)setTinkerFirstName:(id)arg1;
- (void)setTinkerLastName:(id)arg1;
- (int)setupType;
- (id)setupTypeAsString:(int)arg1;
- (id)tinkerFirstName;
- (id)tinkerLastName;
- (void)writeTo:(id)arg1;

@end
