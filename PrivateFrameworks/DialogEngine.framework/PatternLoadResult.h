
@interface PatternLoadResult : NSObject {
    NSDictionary * _groups;
    NSDictionary * _meta;
    NSString * _patternId;
    unsigned long long  _patternType;
    NSDictionary * _settings;
}

@property (nonatomic, retain) NSDictionary *groups;
@property (nonatomic, retain) NSDictionary *meta;
@property (nonatomic, retain) NSString *patternId;
@property (nonatomic) unsigned long long patternType;
@property (nonatomic, retain) NSDictionary *settings;

- (void).cxx_destruct;
- (id)getPrompts;
- (id)groups;
- (id)meta;
- (id)patternId;
- (unsigned long long)patternType;
- (void)setGroups:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setPatternId:(id)arg1;
- (void)setPatternType:(unsigned long long)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
