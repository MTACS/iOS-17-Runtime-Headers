
@interface CLSFeederPrefetchOptions : NSObject <NSCopying> {
    unsigned long long  _faceInformationPrefetchMode;
    unsigned long long  _locationPrefetchMode;
    unsigned long long  _personCountPrefetchMode;
    unsigned long long  _personsPrefetchMode;
    unsigned long long  _scenesPrefetchMode;
}

@property (nonatomic) unsigned long long faceInformationPrefetchMode;
@property (nonatomic) unsigned long long locationPrefetchMode;
@property (nonatomic) unsigned long long personCountPrefetchMode;
@property (nonatomic) unsigned long long personsPrefetchMode;
@property (nonatomic) unsigned long long scenesPrefetchMode;

+ (id)feederPrefetchOptionsWithDefaultMode:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)faceInformationPrefetchMode;
- (id)init;
- (unsigned long long)locationPrefetchMode;
- (void)mergeWithFeederPrefetchOptions:(id)arg1;
- (unsigned long long)personCountPrefetchMode;
- (unsigned long long)personsPrefetchMode;
- (unsigned long long)scenesPrefetchMode;
- (void)setFaceInformationPrefetchMode:(unsigned long long)arg1;
- (void)setLocationPrefetchMode:(unsigned long long)arg1;
- (void)setPersonCountPrefetchMode:(unsigned long long)arg1;
- (void)setPersonsPrefetchMode:(unsigned long long)arg1;
- (void)setScenesPrefetchMode:(unsigned long long)arg1;

@end
