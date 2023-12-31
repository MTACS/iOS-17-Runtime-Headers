
@interface _MRReceivedCommandAppOptionsProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int launchApplication : 1; 
    }  _has;
    bool  _launchApplication;
}

@property (nonatomic) bool hasLaunchApplication;
@property (nonatomic) bool launchApplication;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLaunchApplication;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)launchApplication;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLaunchApplication:(bool)arg1;
- (void)setLaunchApplication:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
