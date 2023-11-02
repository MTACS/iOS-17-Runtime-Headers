
@interface WiFiWalletPass : NSObject <WiFiCandidateNetwork> {
    NSString * SSID;
    NSString * _localizedDescription;
    NSDate * _relevantDate;
    NSString * _serialNumber;
    NSString * _uniqueIdentifier;
    NSSet * accessPoints;
    NSSet * attributes;
    bool  matched;
    NSString * password;
    <TBScore> * popularityScore;
    <TBScore> * qualityScore;
    unsigned long long  type;
    unsigned long long  venueGroup;
    unsigned int  venueType;
}

@property (nonatomic, copy) NSString *SSID;
@property (nonatomic, readonly) NSSet *accessPoints;
@property (nonatomic, readonly) NSSet *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic) bool matched;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) <TBScore> *popularityScore;
@property (nonatomic, readonly) <TBScore> *qualityScore;
@property (nonatomic, copy) NSDate *relevantDate;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, readonly) long long source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) unsigned long long venueGroup;
@property (nonatomic, readonly) unsigned int venueType;

- (void).cxx_destruct;
- (id)SSID;
- (id)accessPoints;
- (id)attributes;
- (bool)containsAccessPointMatchingBSSIDs:(id)arg1;
- (id)description;
- (id)localizedDescription;
- (bool)matched;
- (id)password;
- (id)popularityScore;
- (id)qualityScore;
- (id)relevantDate;
- (id)serialNumber;
- (void)setLocalizedDescription:(id)arg1;
- (void)setMatched:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setSSID:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (long long)source;
- (unsigned long long)type;
- (id)uniqueIdentifier;
- (unsigned long long)venueGroup;
- (unsigned int)venueType;

@end
