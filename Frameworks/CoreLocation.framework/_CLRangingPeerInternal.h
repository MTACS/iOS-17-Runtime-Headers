
@interface _CLRangingPeerInternal : NSObject <NSCopying> {
    unsigned long long  _macAddress;
    NSData * _secureRangingKeyID;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2;

@end
