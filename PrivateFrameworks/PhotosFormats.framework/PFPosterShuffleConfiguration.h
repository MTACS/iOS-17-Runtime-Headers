
@interface PFPosterShuffleConfiguration : NSObject <NSCopying, NSSecureCoding, PFPosterConfigurationAnalyticsSupport> {
    NSSet * _personLocalIdentifiers;
    long long  _shuffleFrequency;
    unsigned long long  _shuffleSmartAlbums;
    long long  _shuffleType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeCityscapes;
@property (nonatomic) bool includeLandscapes;
@property (nonatomic) bool includePeople;
@property (nonatomic) bool includePets;
@property (nonatomic, retain) NSSet *personLocalIdentifiers;
@property (nonatomic) long long shuffleFrequency;
@property (nonatomic) unsigned long long shuffleSmartAlbums;
@property (nonatomic) long long shuffleType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsPayload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includeCityscapes;
- (bool)includeLandscapes;
- (bool)includePeople;
- (bool)includePets;
- (id)initWithCoder:(id)arg1;
- (id)initWithShuffleType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)personLocalIdentifiers;
- (void)setIncludeCityscapes:(bool)arg1;
- (void)setIncludeLandscapes:(bool)arg1;
- (void)setIncludePeople:(bool)arg1;
- (void)setIncludePets:(bool)arg1;
- (void)setPersonLocalIdentifiers:(id)arg1;
- (void)setShuffleFrequency:(long long)arg1;
- (void)setShuffleSmartAlbums:(unsigned long long)arg1;
- (void)setShuffleType:(long long)arg1;
- (long long)shuffleFrequency;
- (unsigned long long)shuffleSmartAlbums;
- (long long)shuffleType;

@end
