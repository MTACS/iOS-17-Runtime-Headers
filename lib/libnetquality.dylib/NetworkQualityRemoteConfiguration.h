
@interface NetworkQualityRemoteConfiguration : NSObject {
    NetworkQualityConfiguration * _config;
    NSString * _port;
    NSString * _testEndpoint;
    NSDictionary * _urls;
}

@property (nonatomic, retain) NSString *testEndpoint;

- (void).cxx_destruct;
- (id)URLForURLType:(int)arg1;
- (id)initWithData:(id)arg1 andConfig:(id)arg2;
- (id)initWithDictionary:(id)arg1 andConfig:(id)arg2;
- (id)portForURLType:(int)arg1;
- (void)setTestEndpoint:(id)arg1;
- (id)testEndpoint;
- (id)testEndpoint:(int)arg1;

@end
