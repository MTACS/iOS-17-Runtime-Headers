
@interface PUSceneDebugInspectorSceneViewModel : NSObject {
    unsigned long long  _count;
    unsigned long long  _highConfidenceCount;
    bool  _isIndexed;
    NSString * _keyword;
    double  _libraryCoverage;
    unsigned int  _sceneIdentifier;
    NSArray * _synonyms;
    double  _threshold;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long highConfidenceCount;
@property (nonatomic, readonly) bool isIndexed;
@property (nonatomic, readonly) NSString *keyword;
@property (nonatomic) double libraryCoverage;
@property (nonatomic, readonly) unsigned int sceneIdentifier;
@property (nonatomic, readonly) NSArray *synonyms;
@property (nonatomic, readonly) double threshold;

- (void).cxx_destruct;
- (id)concatenatedSynonyms;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)highConfidenceCount;
- (id)initWithKeyword:(id)arg1 synonyms:(id)arg2 sceneIdentifier:(unsigned int)arg3 indexed:(bool)arg4 threshold:(double)arg5;
- (bool)isIndexed;
- (id)keyword;
- (double)libraryCoverage;
- (unsigned int)sceneIdentifier;
- (void)setCount:(unsigned long long)arg1;
- (void)setHighConfidenceCount:(unsigned long long)arg1;
- (void)setLibraryCoverage:(double)arg1;
- (id)synonyms;
- (double)threshold;

@end
