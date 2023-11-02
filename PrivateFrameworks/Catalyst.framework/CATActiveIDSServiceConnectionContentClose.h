
@interface CATActiveIDSServiceConnectionContentClose : NSObject <CATActiveIDSServiceConnectionMessageContent> {
    NSError * _error;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSError *error;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (long long)contentType;
- (id)dictionaryValue;
- (id)error;
- (id)init;
- (id)initWithError:(id)arg1;
- (void)setError:(id)arg1;

@end
