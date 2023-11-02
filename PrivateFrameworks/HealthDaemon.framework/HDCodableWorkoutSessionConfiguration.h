
@interface HDCodableWorkoutSessionConfiguration : PBCodable <NSCopying> {
    NSString * _sourceBundleIdentifier;
    HDCodableWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, readonly) bool hasSourceBundleIdentifier;
@property (nonatomic, readonly) bool hasWorkoutConfiguration;
@property (nonatomic, retain) NSString *sourceBundleIdentifier;
@property (nonatomic, retain) HDCodableWorkoutConfiguration *workoutConfiguration;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSourceBundleIdentifier;
- (bool)hasWorkoutConfiguration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (id)sourceBundleIdentifier;
- (id)workoutConfiguration;
- (void)writeTo:(id)arg1;

@end
