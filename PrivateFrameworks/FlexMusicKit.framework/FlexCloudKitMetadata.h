
@interface FlexCloudKitMetadata : NSObject {
    NSNumber * _arousalNumber;
    long long  _artVersion;
    NSString * _audioEncoderPresetName;
    long long  _compatibilityVersion;
    NSSet * _genres;
    NSString * _mood;
    NSString * _moodAlt;
    NSString * _pace;
    NSSet * _regions;
    NSString * _songFormat;
    long long  _songVersion;
    long long  _style;
    NSMutableSet * _tagIDs;
    NSNumber * _valenceNumber;
    NSNumber * _visualTempoNumber;
}

@property (nonatomic, readonly) NSNumber *arousalNumber;
@property (nonatomic, readonly) long long artVersion;
@property (nonatomic, readonly) NSString *audioEncoderPresetName;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) NSSet *genres;
@property (nonatomic, readonly) NSString *mood;
@property (nonatomic, readonly) NSString *moodAlt;
@property (nonatomic, readonly) NSString *pace;
@property (nonatomic, readonly) NSSet *regions;
@property (nonatomic, readonly) NSString *songFormat;
@property (nonatomic, readonly) long long songVersion;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) NSSet *tagIDs;
@property (nonatomic, readonly) NSNumber *valenceNumber;
@property (nonatomic, readonly) NSNumber *visualTempoNumber;

- (void).cxx_destruct;
- (id)arousalNumber;
- (long long)artVersion;
- (id)audioEncoderPresetName;
- (long long)compatibilityVersion;
- (id)genres;
- (id)initWithMetadataString:(id)arg1;
- (id)mood;
- (id)moodAlt;
- (id)pace;
- (id)regions;
- (id)songFormat;
- (long long)songVersion;
- (long long)style;
- (id)tagIDs;
- (id)valenceNumber;
- (id)visualTempoNumber;

@end
