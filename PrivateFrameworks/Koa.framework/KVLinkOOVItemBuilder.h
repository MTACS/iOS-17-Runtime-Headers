
@interface KVLinkOOVItemBuilder : NSObject {
    KVItemBuilder * _builder;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)_buildItemWithError:(id*)arg1;
- (id)init;
- (id)linkOOVItemWithPhrase:(id)arg1 itemId:(id)arg2 customPronunciations:(id)arg3 error:(id*)arg4;

@end
