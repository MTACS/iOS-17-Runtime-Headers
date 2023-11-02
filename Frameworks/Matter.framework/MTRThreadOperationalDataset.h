
@interface MTRThreadOperationalDataset : NSObject {
    NSData * _PSKc;
    NSNumber * _channelNumber;
    struct OperationalDataset { 
        unsigned char mData[254]; 
        unsigned char mLength; 
    }  _cppThreadOperationalDataset;
    NSData * _extendedPANID;
    NSData * _masterKey;
    NSString * _networkName;
    NSData * _panID;
}

@property (nonatomic, readonly, copy) NSData *PSKc;
@property (nonatomic) unsigned short channel;
@property (nonatomic, copy) NSNumber *channelNumber;
@property (readonly) struct OperationalDataset { unsigned char x1[254]; unsigned char x2; } cppThreadOperationalDataset;
@property (nonatomic, readonly, copy) NSData *extendedPANID;
@property (nonatomic, readonly, copy) NSData *masterKey;
@property (nonatomic, readonly, copy) NSString *networkName;
@property (nonatomic, readonly, copy) NSData *panID;

- (void).cxx_destruct;
- (id)PSKc;
- (bool)_checkDataLength:(id)arg1 expectedLength:(unsigned long long)arg2;
- (bool)_populateCppOperationalDataset;
- (unsigned short)channel;
- (id)channelNumber;
- (struct OperationalDataset { unsigned char x1[254]; unsigned char x2; })cppThreadOperationalDataset;
- (id)data;
- (id)extendedPANID;
- (id)initWithData:(id)arg1;
- (id)initWithNetworkName:(id)arg1 extendedPANID:(id)arg2 masterKey:(id)arg3 PSKc:(id)arg4 channel:(unsigned short)arg5 panID:(id)arg6;
- (id)initWithNetworkName:(id)arg1 extendedPANID:(id)arg2 masterKey:(id)arg3 PSKc:(id)arg4 channelNumber:(id)arg5 panID:(id)arg6;
- (id)masterKey;
- (id)networkName;
- (id)panID;
- (void)setChannel:(unsigned short)arg1;
- (void)setChannelNumber:(id)arg1;

@end
