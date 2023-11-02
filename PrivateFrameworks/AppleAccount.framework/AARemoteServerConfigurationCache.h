
@interface AARemoteServerConfigurationCache : NSObject {
    AAURLConfiguration * _configuration;
    NSDate * _creationDate;
    NSHTTPURLResponse * _response;
}

@property (nonatomic, readonly) AAURLConfiguration *configuration;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSHTTPURLResponse *response;

+ (id)cacheWithConfiguration:(id)arg1 response:(id)arg2;

- (void).cxx_destruct;
- (id)configuration;
- (id)creationDate;
- (id)init;
- (id)initWithConfiguration:(id)arg1 response:(id)arg2;
- (id)response;

@end
