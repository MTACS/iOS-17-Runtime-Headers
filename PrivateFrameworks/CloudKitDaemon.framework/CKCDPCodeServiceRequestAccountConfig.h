
@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {
    unsigned long long  _accountFlags;
    bool  _corporateSharingEnabled;
    NSString * _countryCode;
    struct { 
        unsigned int accountFlags : 1; 
        unsigned int lastWebActivityUTCMills : 1; 
        unsigned int photosWebAccessTimestamp : 1; 
        unsigned int corporateSharingEnabled : 1; 
    }  _has;
    long long  _lastWebActivityUTCMills;
    long long  _photosWebAccessTimestamp;
}

@property (nonatomic) unsigned long long accountFlags;
@property (nonatomic) bool corporateSharingEnabled;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic) bool hasAccountFlags;
@property (nonatomic) bool hasCorporateSharingEnabled;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic) bool hasLastWebActivityUTCMills;
@property (nonatomic) bool hasPhotosWebAccessTimestamp;
@property (nonatomic) long long lastWebActivityUTCMills;
@property (nonatomic) long long photosWebAccessTimestamp;

- (void).cxx_destruct;
- (unsigned long long)accountFlags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)corporateSharingEnabled;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountFlags;
- (bool)hasCorporateSharingEnabled;
- (bool)hasCountryCode;
- (bool)hasLastWebActivityUTCMills;
- (bool)hasPhotosWebAccessTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)lastWebActivityUTCMills;
- (void)mergeFrom:(id)arg1;
- (long long)photosWebAccessTimestamp;
- (bool)readFrom:(id)arg1;
- (void)setAccountFlags:(unsigned long long)arg1;
- (void)setCorporateSharingEnabled:(bool)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setHasAccountFlags:(bool)arg1;
- (void)setHasCorporateSharingEnabled:(bool)arg1;
- (void)setHasLastWebActivityUTCMills:(bool)arg1;
- (void)setHasPhotosWebAccessTimestamp:(bool)arg1;
- (void)setLastWebActivityUTCMills:(long long)arg1;
- (void)setPhotosWebAccessTimestamp:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
