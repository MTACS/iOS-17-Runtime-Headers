
@interface CLSCurationModelSpecification : NSObject <NSCopying> {
    unsigned long long  _faceAnalysisVersion;
    unsigned long long  _mediaAnalysisVersion;
    unsigned long long  _sceneAnalysisVersion;
}

@property (readonly) unsigned long long faceAnalysisVersion;
@property (readonly) unsigned long long mediaAnalysisVersion;
@property (readonly) unsigned long long sceneAnalysisVersion;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)faceAnalysisVersion;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1;
- (id)initWithItemInfo:(id)arg1 options:(id)arg2;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1 mediaAnalysisVersion:(unsigned long long)arg2 faceAnalysisVersion:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mediaAnalysisVersion;
- (unsigned long long)sceneAnalysisVersion;

@end
