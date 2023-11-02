
@interface TRITrialCloudKitContainerOriginFields : PBCodable <NSCopying> {
    int  _ckContainer;
    int  _ckEnvironment;
    struct { 
        unsigned int ckContainer : 1; 
        unsigned int ckEnvironment : 1; 
    }  _has;
}

@property (nonatomic) int ckContainer;
@property (nonatomic) int ckEnvironment;
@property (nonatomic) bool hasCkContainer;
@property (nonatomic) bool hasCkEnvironment;

- (int)StringAsCkContainer:(id)arg1;
- (int)StringAsCkEnvironment:(id)arg1;
- (int)ckContainer;
- (id)ckContainerAsString:(int)arg1;
- (int)ckEnvironment;
- (id)ckEnvironmentAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCkContainer;
- (bool)hasCkEnvironment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCkContainer:(int)arg1;
- (void)setCkEnvironment:(int)arg1;
- (void)setHasCkContainer:(bool)arg1;
- (void)setHasCkEnvironment:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
