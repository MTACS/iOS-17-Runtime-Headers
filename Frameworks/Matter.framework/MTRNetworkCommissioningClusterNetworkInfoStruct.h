
@interface MTRNetworkCommissioningClusterNetworkInfoStruct : NSObject <NSCopying> {
    NSNumber * _connected;
    NSData * _networkID;
}

@property (nonatomic, copy) NSNumber *connected;
@property (nonatomic, copy) NSData *networkID;

- (void).cxx_destruct;
- (id)connected;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)networkID;
- (void)setConnected:(id)arg1;
- (void)setNetworkID:(id)arg1;

@end
