
@interface DKReportingConcurrentRequest : NSObject {
    DKExtensionAdapter * _generator;
    NSMutableSet * _manifest;
}

@property (nonatomic, retain) DKExtensionAdapter *generator;
@property (nonatomic, retain) NSMutableSet *manifest;

+ (id)concurrentRequestWithGenerator:(id)arg1;

- (void).cxx_destruct;
- (id)generator;
- (id)initWithGenerator:(id)arg1;
- (id)manifest;
- (void)setGenerator:(id)arg1;
- (void)setManifest:(id)arg1;

@end
