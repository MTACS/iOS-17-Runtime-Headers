
@interface MPStatusKitMessage : NSObject {
    NSData * _encryptedMessage;
    unsigned short  _index;
    NSData * _signature;
}

@property (nonatomic, readonly) NSData *encryptedMessage;
@property (nonatomic, readonly) unsigned short index;
@property (nonatomic, readonly) NSData *signature;

- (void).cxx_destruct;
- (id)encryptedMessage;
- (unsigned short)index;
- (id)initWithIndex:(unsigned short)arg1 encryptedMessage:(id)arg2 signature:(id)arg3;
- (id)signature;

@end
