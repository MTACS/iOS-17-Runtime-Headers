
@interface ICSharedListeningContainer : NSObject <NSCopying> {
    NSString * _featureName;
    NSString * _identifier;
    long long  _kind;
    NSString * _mediaIdentifier;
    ICSharedListeningItem * _seedItem;
    NSString * _stationHash;
}

@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly, copy) NSString *mediaIdentifier;
@property (nonatomic, readonly, copy) ICSharedListeningItem *seedItem;
@property (nonatomic, readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly, copy) NSString *stationHash;

+ (id)albumContainerWithMediaIdentifier:(id)arg1 featureName:(id)arg2;
+ (id)autoPlayContainerWithMediaIdentifier:(id)arg1 featureName:(id)arg2;
+ (id)groupWithFeatureName:(id)arg1;
+ (id)playlistContainerWithMediaIdentifier:(id)arg1 featureName:(id)arg2;
+ (id)radioContainerWithMediaIdentifier:(id)arg1 featureName:(id)arg2;
+ (id)radioContainerWithSeedItem:(id)arg1 featureName:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithKind:(long long)arg1 mediaIdentifier:(id)arg2 featureName:(id)arg3;
- (id)_initWithKind:(long long)arg1 seedItem:(id)arg2 featureName:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)featureName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)kind;
- (id)mediaIdentifier;
- (id)seedItem;
- (void)setIdentifier:(id)arg1;
- (id)shortDescription;
- (id)stationHash;

@end
