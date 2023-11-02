
@interface CLPContext : PBCodable <NSCopying> {
    NSString * _bundleCategory;
    struct { 
        unsigned int type : 1; 
        unsigned int workoutType : 1; 
        unsigned int isDriving : 1; 
    }  _has;
    bool  _isDriving;
    int  _type;
    int  _workoutType;
}

@property (nonatomic, retain) NSString *bundleCategory;
@property (nonatomic, readonly) bool hasBundleCategory;
@property (nonatomic) bool hasIsDriving;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasWorkoutType;
@property (nonatomic) bool isDriving;
@property (nonatomic) int type;
@property (nonatomic) int workoutType;

- (void).cxx_destruct;
- (id)bundleCategory;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleCategory;
- (bool)hasIsDriving;
- (bool)hasType;
- (bool)hasWorkoutType;
- (unsigned long long)hash;
- (bool)isDriving;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleCategory:(id)arg1;
- (void)setHasIsDriving:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasWorkoutType:(bool)arg1;
- (void)setIsDriving:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setWorkoutType:(int)arg1;
- (int)type;
- (int)workoutType;
- (void)writeTo:(id)arg1;

@end
