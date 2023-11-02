
@interface AVOutputDeviceAuthorizedPeerInternal : NSObject {
    NSString * ID;
    bool  isAdmin;
    NSData * publicKey;
}

@end
