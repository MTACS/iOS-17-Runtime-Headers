
@interface _TIPreferencesAnalyzerProperty : NSObject {
    id  _defaultValue;
    NSString * _domain;
    NSString * _key;
    int  _reportingMode;
}

@property (nonatomic, retain) id defaultValue;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int reportingMode;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)domain;
- (id)initWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 reportingMode:(int)arg4;
- (id)key;
- (int)reportingMode;
- (void)setDefaultValue:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setReportingMode:(int)arg1;

@end
