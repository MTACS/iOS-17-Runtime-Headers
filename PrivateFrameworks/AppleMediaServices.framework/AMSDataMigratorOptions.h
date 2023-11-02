
@interface AMSDataMigratorOptions : NSObject {
    NSString * _currentBuildVersion;
    NSString * _previousBuildVersion;
    unsigned long long  _scenario;
}

@property (nonatomic, copy) NSString *currentBuildVersion;
@property (nonatomic, readonly) NSArray *optionsArray;
@property (nonatomic, copy) NSString *previousBuildVersion;
@property (nonatomic) unsigned long long scenario;

+ (id)_stringFromOptionsArray:(id)arg1 atIndex:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)currentBuildVersion;
- (id)init;
- (id)initWithOptionsArray:(id)arg1;
- (id)optionsArray;
- (id)previousBuildVersion;
- (unsigned long long)scenario;
- (void)setCurrentBuildVersion:(id)arg1;
- (void)setPreviousBuildVersion:(id)arg1;
- (void)setScenario:(unsigned long long)arg1;

@end
