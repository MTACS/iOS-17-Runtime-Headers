
@interface IMUnitTestBundleLoader : NSObject {
    IMUnitTestLogger * _logger;
}

@property (readonly) IMUnitTestLogger *logger;

- (void).cxx_destruct;
- (id)initWithLogger:(id)arg1;
- (bool)loadTestBundle:(id)arg1 bundle:(id*)arg2 error:(id*)arg3;
- (id)logger;

@end
