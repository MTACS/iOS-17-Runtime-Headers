
@interface MRTransactionDestination : NSObject {
    unsigned long long  _name;
    MRTransactionPacketizer * _packetizer;
    MRPlayerPath * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) MRPlayerPath *playerPath;

- (void).cxx_destruct;
- (id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2;
- (unsigned long long)name;
- (void)packetsFromMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)playerPath;
- (void)unpacketize:(id)arg1 completion:(id /* block */)arg2;

@end
