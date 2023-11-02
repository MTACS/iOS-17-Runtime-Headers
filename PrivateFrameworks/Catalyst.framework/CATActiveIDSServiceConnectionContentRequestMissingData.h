
@interface CATActiveIDSServiceConnectionContentRequestMissingData : NSObject <CATActiveIDSServiceConnectionMessageContent> {
    unsigned long long  _expectedSequenceNumber;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) unsigned long long expectedSequenceNumber;

+ (id)instanceWithDictionary:(id)arg1;

- (long long)contentType;
- (id)dictionaryValue;
- (unsigned long long)expectedSequenceNumber;
- (id)initWithExpectedSequenceNumber:(unsigned long long)arg1;

@end
