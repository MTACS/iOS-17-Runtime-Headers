
@interface SGPatternGlobalData : NSObject {
    NSArray * currentLanguages;
    int  globalLanguageVersion;
    SGPatternDataFile * patternData;
    NSDictionary * patternDict;
    NSHashTable * patternInstances;
    NSMutableSet * regexesImmuneToDeath;
    bool  useAllLanguages;
}

- (void).cxx_destruct;

@end
