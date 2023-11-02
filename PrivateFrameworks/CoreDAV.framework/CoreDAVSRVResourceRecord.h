
@interface CoreDAVSRVResourceRecord : NSObject {
    NSNumber * _port;
    NSString * _serviceString;
    NSString * _target;
}

@property (nonatomic, retain) NSNumber *port;
@property (nonatomic, retain) NSString *serviceString;
@property (nonatomic, retain) NSString *target;

- (void).cxx_destruct;
- (id)description;
- (id)port;
- (id)serviceString;
- (void)setPort:(id)arg1;
- (void)setServiceString:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
