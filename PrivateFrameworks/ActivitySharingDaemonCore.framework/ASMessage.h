
@interface ASMessage : NSObject {
    id /* block */  _ephemeralCompletionBlock;
    NSData * _payload;
    long long  _retryCount;
    NSString * _senderAddress;
    int  _type;
}

@property (nonatomic, copy) id /* block */ ephemeralCompletionBlock;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) long long retryCount;
@property (nonatomic, copy) NSString *senderAddress;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id /* block */)ephemeralCompletionBlock;
- (id)initWithDictionary:(id)arg1;
- (id)payload;
- (long long)retryCount;
- (id)senderAddress;
- (void)setEphemeralCompletionBlock:(id /* block */)arg1;
- (void)setPayload:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
