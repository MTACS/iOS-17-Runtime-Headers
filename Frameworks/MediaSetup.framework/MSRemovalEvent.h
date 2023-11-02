
@interface MSRemovalEvent : NSObject {
    NSString * _serviceId;
}

@property (nonatomic, retain) NSString *serviceId;

- (void).cxx_destruct;
- (id)initWithServiceId:(id)arg1;
- (id)serviceId;
- (void)setServiceId:(id)arg1;

@end
