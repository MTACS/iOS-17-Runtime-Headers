
@interface HMIThermalMonitorService : HMFObject {
    struct __IOHIDServiceClient { } * _service;
}

- (void)dealloc;
- (id)initWithService:(struct __IOHIDServiceClient { }*)arg1;
- (double)readValue;

@end
