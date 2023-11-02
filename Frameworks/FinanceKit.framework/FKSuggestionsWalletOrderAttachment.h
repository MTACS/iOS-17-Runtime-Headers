
@interface FKSuggestionsWalletOrderAttachment : NSObject {
    NSData * _data;
    NSString * _fullyQualifiedOrderIdentifier;
    unsigned long long  _orderState;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *fullyQualifiedOrderIdentifier;
@property (nonatomic) unsigned long long orderState;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)readContentsOfOrderAtURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)data;
- (id)fullyQualifiedOrderIdentifier;
- (id)initWithURL:(id)arg1 data:(id)arg2 fqoid:(id)arg3 state:(unsigned long long)arg4;
- (unsigned long long)orderState;
- (void)setOrderState:(unsigned long long)arg1;
- (id)url;

@end
