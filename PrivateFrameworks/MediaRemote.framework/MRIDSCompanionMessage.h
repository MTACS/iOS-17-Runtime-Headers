
@interface MRIDSCompanionMessage : NSObject {
    NSData * _data;
    NSNumber * _messageID;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSNumber *messageID;

- (void).cxx_destruct;
- (id)data;
- (id)initWithID:(id)arg1 data:(id)arg2;
- (id)messageID;
- (bool)replyWithData:(id)arg1 priority:(long long)arg2;

@end
