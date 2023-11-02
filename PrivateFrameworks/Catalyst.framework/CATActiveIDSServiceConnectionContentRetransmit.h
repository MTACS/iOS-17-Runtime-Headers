
@interface CATActiveIDSServiceConnectionContentRetransmit : NSObject <CATActiveIDSServiceConnectionMessageContent> {
    NSArray * _sequenceNumbers;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly, copy) NSArray *sequenceNumbers;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (long long)contentType;
- (id)dictionaryValue;
- (id)initWithSequenceNumbers:(id)arg1;
- (id)sequenceNumbers;

@end
