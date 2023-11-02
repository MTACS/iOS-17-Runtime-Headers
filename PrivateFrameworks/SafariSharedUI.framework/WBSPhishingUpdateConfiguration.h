
@interface WBSPhishingUpdateConfiguration : NSObject {
    NSString * _configurationName;
    NSString * _configurationVersion;
    double  _updateInterval;
}

@property (nonatomic, readonly) NSString *configurationName;
@property (nonatomic, readonly) NSString *configurationVersion;
@property (nonatomic, readonly) double updateInterval;

- (void).cxx_destruct;
- (id)configurationName;
- (id)configurationVersion;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (double)updateInterval;

@end
