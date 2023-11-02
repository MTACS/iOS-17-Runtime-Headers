
@interface _CPUsageEnvelope : PBCodable <NSSecureCoding, _CPUsageEnvelope> {
    long long  _collectionEndTimestamp;
    long long  _collectionStartTimestamp;
    int  _configuredLookbackTimeInDays;
    _CPDeviceContext * _context;
    _CPImagesUsagePropensity * _imagesUsagePropensity;
    _CPNewsUsagePropensity * _newsUsagePropensity;
    _CPSafariUsagePropensity * _safariUsagePropensity;
    _CPSpotlightUsagePropensity * _spotlightUsagePropensity;
    int  _totalSessions;
    _CPUsageSinceLookback * _usageSinceLookback;
    NSData * _uuidBytes;
    unsigned long long  _whichKind;
}

@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (nonatomic, retain) _CPDeviceContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _CPImagesUsagePropensity *imagesUsagePropensity;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _CPNewsUsagePropensity *newsUsagePropensity;
@property (nonatomic, retain) _CPSafariUsagePropensity *safariUsagePropensity;
@property (nonatomic, retain) _CPSpotlightUsagePropensity *spotlightUsagePropensity;
@property (readonly) Class superclass;
@property (nonatomic) int totalSessions;
@property (nonatomic, retain) _CPUsageSinceLookback *usageSinceLookback;
@property (nonatomic, copy) NSData *uuidBytes;
@property (nonatomic, readonly) unsigned long long whichKind;

- (void).cxx_destruct;
- (void)clearKind;
- (long long)collectionEndTimestamp;
- (long long)collectionStartTimestamp;
- (int)configuredLookbackTimeInDays;
- (id)context;
- (unsigned long long)hash;
- (id)imagesUsagePropensity;
- (bool)isEqual:(id)arg1;
- (id)newsUsagePropensity;
- (bool)readFrom:(id)arg1;
- (id)safariUsagePropensity;
- (void)setCollectionEndTimestamp:(long long)arg1;
- (void)setCollectionStartTimestamp:(long long)arg1;
- (void)setConfiguredLookbackTimeInDays:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setImagesUsagePropensity:(id)arg1;
- (void)setNewsUsagePropensity:(id)arg1;
- (void)setSafariUsagePropensity:(id)arg1;
- (void)setSpotlightUsagePropensity:(id)arg1;
- (void)setTotalSessions:(int)arg1;
- (void)setUsageSinceLookback:(id)arg1;
- (void)setUuidBytes:(id)arg1;
- (id)spotlightUsagePropensity;
- (int)totalSessions;
- (id)usageSinceLookback;
- (id)uuidBytes;
- (unsigned long long)whichKind;
- (void)writeTo:(id)arg1;

@end
