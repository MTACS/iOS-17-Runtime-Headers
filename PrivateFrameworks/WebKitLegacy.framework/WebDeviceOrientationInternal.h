
@interface WebDeviceOrientationInternal : NSObject {
    struct RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>> { 
        struct DeviceOrientationData {} *m_ptr; 
    }  m_orientation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoreDeviceOrientation:(void*)arg1;

@end
