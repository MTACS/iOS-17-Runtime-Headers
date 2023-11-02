
@interface IMUnitTestFrameworkLoader : NSObject {
    IMUnitTestBundleLoader * _bundleLoader;
    IMUnitTestLogger * _logger;
    bool  _xctestFrameworkLoaded;
}

@property (nonatomic, readonly) IMUnitTestBundleLoader *bundleLoader;
@property (readonly) IMUnitTestLogger *logger;
@property bool xctestFrameworkLoaded;

- (void).cxx_destruct;
- (id)bundleLoader;
- (bool)findFrameworkPathsWithFrameworkNames:(id)arg1 searchPaths:(id)arg2 outFrameworkPaths:(id*)arg3 error:(id*)arg4;
- (bool)frameworkExistsAtPath:(id)arg1;
- (id)frameworkSearchPaths;
- (id)initWithLogger:(id)arg1 bundleLoader:(id)arg2;
- (bool)loadFrameworkNamesFromTextFile:(id)arg1 outNames:(id*)arg2 error:(id*)arg3;
- (bool)loadFrameworks:(id)arg1 outError:(id*)arg2;
- (bool)loadTestFrameworks:(id*)arg1;
- (bool)loadXCTestFramework:(id*)arg1;
- (bool)loadXCTestFrameworkFromSDK:(id*)arg1;
- (id)logger;
- (bool)readXCTestFrameworkDependencies:(id*)arg1 error:(id*)arg2;
- (void)setXctestFrameworkLoaded:(bool)arg1;
- (bool)xctestFrameworkLoaded;

@end
