
@interface CRKYoIDSMessage : NSObject <CRKIDSMessage> {
    NSString * _message;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly) long long messageType;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (long long)messageType;

@end
