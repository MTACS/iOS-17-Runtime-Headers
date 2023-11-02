
@interface AAPendingIDSMessage : NSObject {
    NSData * _data;
    NSString * _senderHandle;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *senderHandle;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)data;
- (id)initCustodianMessageFrom:(id)arg1 data:(id)arg2;
- (id)initInheritanceMessageFrom:(id)arg1 data:(id)arg2;
- (id)senderHandle;
- (long long)type;

@end
