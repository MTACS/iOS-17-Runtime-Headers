
@interface CARInputDevice : NSObject {
    NSString * _UUID;
    unsigned long long  _senderID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) unsigned long long senderID;

- (void).cxx_destruct;
- (id)UUID;
- (void)_setSenderID:(unsigned long long)arg1;
- (void)_setUUID:(id)arg1;
- (id)initWithServiceClient:(struct __IOHIDServiceClient { }*)arg1 UUID:(id)arg2;
- (unsigned long long)senderID;

@end
