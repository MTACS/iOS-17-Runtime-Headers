
@interface FSIOKitNotificationHandler : NSObject {
    FSBlockDeviceResource * _resource;
}

@property FSBlockDeviceResource *resource;

- (void).cxx_destruct;
- (id)resource;
- (void)setResource:(id)arg1;

@end
