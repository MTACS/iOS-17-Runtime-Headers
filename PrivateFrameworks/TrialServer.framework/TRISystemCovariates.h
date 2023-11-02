
@interface TRISystemCovariates : NSObject <TRISystemCovariateProviding> {
    NSDictionary * _dictionary;
    TRISystemConfiguration * _sysConfig;
}

- (void).cxx_destruct;
- (id)dictionary;
- (id)getContextValueWithName:(id)arg1;
- (id)initWithPaths:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)tri_contextValueWithName:(id)arg1;

@end
