
@interface ATXAppModeEntity : NSObject <ATXModeEntityProtocol> {
    NSString * _bundleId;
    NSArray * _itunesGenreIds;
    ATXModeEntityScore * scoreMetadata;
}

@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *itunesGenreIds;
@property (nonatomic, retain) ATXModeEntityScore *scoreMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBundleId:(id)arg1;
- (id)initWithBundleId:(id)arg1 itunesGenreIds:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itunesGenreIds;
- (id)jsonDict;
- (id)scoreMetadata;
- (void)setBundleId:(id)arg1;
- (void)setItunesGenreIds:(id)arg1;
- (void)setScoreMetadata:(id)arg1;

@end
