
@interface BKDeviceDescriptor : NSObject {
    long long  _type;
}

@property (nonatomic) long long type;

+ (id)deviceDescriptorForType:(long long)arg1;
+ (void)initialize;

- (void)setType:(long long)arg1;
- (long long)type;

@end
