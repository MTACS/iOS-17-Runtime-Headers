
@interface KVSpanMatcher : NSObject {
    KVSpanMatchResultInterpreter * _interpreter;
    NSObject<KVSkitAccessProvider> * _skitProvider;
}

+ (id)indexMatcher;
+ (void)initialize;
+ (id)itemMatcher:(id)arg1 locale:(id)arg2;
+ (id)itemMatcher:(id)arg1 tokenizer:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_searchSkit:(id)arg1 userId:(id)arg2 error:(id*)arg3;
- (id)indexLocaleWithError:(id*)arg1;
- (id)indexLocaleWithUserId:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithSkitAccessProvider:(id)arg1 resultInterpreter:(id)arg2;
- (id)matchSpans:(id)arg1 error:(id*)arg2;
- (id)matchSpans:(id)arg1 userId:(id)arg2 error:(id*)arg3;
- (void)prewarmIndexWithUserId:(id)arg1;
- (bool)setItems:(id)arg1 error:(id*)arg2;

@end
