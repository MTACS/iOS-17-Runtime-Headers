
@interface _LABKDeviceDescriptor : NSObject {
    long long  _type;
}

@property (nonatomic, readonly) long long type;

+ (id)deviceDescriptorForType:(long long)arg1;

- (long long)type;

@end
