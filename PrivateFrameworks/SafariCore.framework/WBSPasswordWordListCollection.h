
@interface WBSPasswordWordListCollection : NSObject {
    NSMutableDictionary * _wordListsByIdentifiers;
}

+ (id)commonPasscodeWordListCollection;
+ (id)commonPasswordWordListCollection;

- (void).cxx_destruct;
- (void)addWordList:(id)arg1;
- (id)entriesForString:(id)arg1;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(id /* block */)arg2;
- (id)init;

@end
