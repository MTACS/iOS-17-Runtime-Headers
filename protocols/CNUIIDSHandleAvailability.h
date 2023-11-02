
@protocol CNUIIDSHandleAvailability <NSObject>

@required

- (<CNUIIDSHandle> *)handle;
- (bool)isAvailable;

@end
