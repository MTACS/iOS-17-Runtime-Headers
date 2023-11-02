
@interface CPSDeviceVariant : NSObject {
    NSString * _device;
    NSString * _osVersion;
    NSNumber * _size;
}

@property (nonatomic, retain) NSString *device;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSNumber *size;

- (void).cxx_destruct;
- (id)device;
- (id)osVersion;
- (void)setDevice:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end
