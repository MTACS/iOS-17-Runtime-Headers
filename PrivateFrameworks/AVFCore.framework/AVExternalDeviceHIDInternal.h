
@interface AVExternalDeviceHIDInternal : NSObject {
    NSString * UUID;
    NSNumber * inputMode;
    NSString * screenID;
    AVWeakReference * weakReferenceToExternalDevice;
}

@end
