
@interface NWStatsConnProperties : NSObject {
    NSString * _domainAttributedBundleId;
    NSString * _domainName;
    NSString * _domainOwner;
    NSString * _domainTrackerContext;
    bool  _hasNetAccess;
    bool  _isNonAppInitiated;
    bool  _isSilent;
    bool  _isTracker;
    NSData * _remoteAddress;
}

@property (nonatomic, retain) NSString *domainAttributedBundleId;
@property (nonatomic, retain) NSString *domainName;
@property (nonatomic, retain) NSString *domainOwner;
@property (nonatomic, retain) NSString *domainTrackerContext;
@property (nonatomic) bool hasNetAccess;
@property (nonatomic) bool isNonAppInitiated;
@property (nonatomic) bool isSilent;
@property (nonatomic) bool isTracker;
@property (nonatomic, retain) NSData *remoteAddress;
@property (nonatomic, readonly) unsigned short remotePort;

- (void).cxx_destruct;
- (id)description;
- (id)domainAttributedBundleId;
- (id)domainName;
- (id)domainOwner;
- (id)domainTrackerContext;
- (bool)hasNetAccess;
- (bool)isNonAppInitiated;
- (bool)isSilent;
- (bool)isTracker;
- (id)remoteAddress;
- (unsigned short)remotePort;
- (void)setDomainAttributedBundleId:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setDomainOwner:(id)arg1;
- (void)setDomainTrackerContext:(id)arg1;
- (void)setHasNetAccess:(bool)arg1;
- (void)setIsNonAppInitiated:(bool)arg1;
- (void)setIsSilent:(bool)arg1;
- (void)setIsTracker:(bool)arg1;
- (void)setRemoteAddress:(id)arg1;

@end
