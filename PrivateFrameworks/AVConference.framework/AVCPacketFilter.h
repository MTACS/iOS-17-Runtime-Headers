
@interface AVCPacketFilter : NSObject {
    bool  _isRTPFilter;
}

@property (readonly) bool isRTPFilter;

- (bool)isMatchedPacket:(const void*)arg1 size:(int)arg2;
- (bool)isRTPFilter;

@end
