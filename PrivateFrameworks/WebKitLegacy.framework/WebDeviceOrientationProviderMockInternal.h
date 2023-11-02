
@interface WebDeviceOrientationProviderMockInternal : NSObject {
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> { 
        struct __compressed_pair<WebCore::DeviceOrientationClientMock *, std::default_delete<WebCore::DeviceOrientationClientMock>> { 
            struct DeviceOrientationClientMock {} *__value_; 
        } __ptr_; 
    }  m_core;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)lastOrientation;
- (void)setController:(struct DeviceOrientationController { }*)arg1;
- (void)setOrientation:(id)arg1;
- (void)startUpdating;
- (void)stopUpdating;

@end
