
@interface RSKeyframeAccumulation : NSObject {
    RSTemporalMeta * _accMeta;
    NSMutableArray * _diffKeyframes;
    NSMutableDictionary * _keyframeOrderDict;
    NSMutableDictionary * _metas;
    NSMutableArray * _newKeyframes;
    unsigned long long  _skipCnt;
    RSPointCloud * _worldpc;
}

- (void).cxx_destruct;
- (id)init;

@end
