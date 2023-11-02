
@interface UserPathManager : NSObject {
    NSMutableDictionary * _lookupTree;
    NSString * _pathFile;
    NSObject<TTKTestCaseSource> * _source;
    NSMutableDictionary * _transforms;
    NSMutableDictionary * _translatedKBDLayouts;
    void * m_generator;
}

- (void).cxx_destruct;
- (bool)buildLookupTree;
- (bool)computeTranslations:(id)arg1;
- (void)dealloc;
- (id)initWithPathFile:(id)arg1;
- (id)lookup:(id)arg1 keyboardController:(id)arg2;
- (void)setRandomNumberSeed:(unsigned int)arg1;
- (id)translateLayoutForKeys:(id)arg1 keyboardController:(id)arg2;

@end
