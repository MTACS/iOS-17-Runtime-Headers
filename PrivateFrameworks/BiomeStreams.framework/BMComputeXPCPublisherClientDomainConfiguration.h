
@interface BMComputeXPCPublisherClientDomainConfiguration : NSObject {
    NSString * _XPCPublisherStreamName;
    NSString * _biomeLaunchNotification;
    unsigned long long  _domain;
    NSString * _machServiceName;
}

@property (nonatomic, readonly, copy) NSString *XPCPublisherStreamName;
@property (nonatomic, readonly, copy) NSString *biomeLaunchNotification;
@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, readonly, copy) NSString *machServiceName;

- (void).cxx_destruct;
- (id)XPCPublisherStreamName;
- (id)biomeLaunchNotification;
- (unsigned long long)domain;
- (id)initWithDomain:(unsigned long long)arg1;
- (id)machServiceName;

@end
