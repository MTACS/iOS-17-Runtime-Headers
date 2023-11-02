
@interface SUScanOptions : SUOptionsBase <NSCopying, NSSecureCoding> {
    bool  _MDMShowRapidSecurityResponse;
    bool  _MDMUseDelayPeriod;
    NSString * _clientName;
    bool  _forced;
    NSString * _identifier;
    bool  _ignoreNoUpdateFoundResult;
    NSString * _requestedBuild;
    NSString * _requestedPMV;
    unsigned long long  _scanType;
    NSString * _sessionID;
    NSMutableSet * _types;
}

@property (nonatomic) bool MDMShowRapidSecurityResponse;
@property (nonatomic) bool MDMUseDelayPeriod;
@property (nonatomic, retain) NSString *clientName;
@property (getter=isForced, nonatomic) bool forced;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool ignoreNoUpdateFoundResult;
@property (nonatomic, retain) NSString *requestedBuild;
@property (nonatomic, retain) NSString *requestedPMV;
@property (nonatomic) unsigned long long scanType;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) NSSet *types;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)MDMShowRapidSecurityResponse;
- (bool)MDMUseDelayPeriod;
- (void)addType:(int)arg1;
- (void)clearTypes;
- (id)clientName;
- (bool)containsType:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)findsAnyUpdate;
- (id)identifier;
- (bool)ignoreNoUpdateFoundResult;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isForced;
- (bool)isSplatOnlyScan;
- (void)removeType:(int)arg1;
- (id)requestedBuild;
- (id)requestedPMV;
- (unsigned long long)scanType;
- (id)sessionID;
- (void)setClientName:(id)arg1;
- (void)setForced:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIgnoreNoUpdateFoundResult:(bool)arg1;
- (void)setMDMShowRapidSecurityResponse:(bool)arg1;
- (void)setMDMUseDelayPeriod:(bool)arg1;
- (void)setRequestedBuild:(id)arg1;
- (void)setRequestedPMV:(id)arg1;
- (void)setScanType:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTypes:(id)arg1;
- (id)types;

@end
