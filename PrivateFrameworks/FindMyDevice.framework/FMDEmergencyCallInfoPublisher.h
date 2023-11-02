
@interface FMDEmergencyCallInfoPublisher : NSObject {
    FMDEmergencyCallInfoPublisherConfiguration * _publisherConfig;
}

@property (nonatomic, retain) FMDEmergencyCallInfoPublisherConfiguration *publisherConfig;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (void)publishInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)publisherConfig;
- (void)setPublisherConfig:(id)arg1;

@end
