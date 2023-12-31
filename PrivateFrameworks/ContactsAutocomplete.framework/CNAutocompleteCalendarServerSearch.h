
@interface CNAutocompleteCalendarServerSearch : NSObject <CNAutocompleteSearch> {
    EKEventStore * _eventStore;
    CNAutocompleteCalendarServerOperationFactory * _operationFactory;
    CNStringTokenizer * _tokenizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNAutocompleteCalendarServerOperationFactory *operationFactory;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNStringTokenizer *tokenizer;

+ (bool)isSupported;

- (void).cxx_destruct;
- (id)eventStore;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)executeRequest:(id)arg1 source:(id)arg2 resultsFactory:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithEventStore:(id)arg1 operationFactory:(id)arg2;
- (id)operationFactory;
- (id)queryForFetchRequest:(id)arg1;
- (id /* block */)resultTransformWithFactory:(id)arg1;
- (void)setTokenizer:(id)arg1;
- (id)tokenizer;

@end
