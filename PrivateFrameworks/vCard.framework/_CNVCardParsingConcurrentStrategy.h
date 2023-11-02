
@interface _CNVCardParsingConcurrentStrategy : NSObject <CNVCardParsingConcurrencyStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)parseData:(id)arg1 options:(id)arg2 resultFactory:(id)arg3;
- (id)seriallyParsedData:(id)arg1 options:(id)arg2 resultFactory:(id)arg3;

@end
