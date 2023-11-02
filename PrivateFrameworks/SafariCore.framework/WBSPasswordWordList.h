
@interface WBSPasswordWordList : NSObject {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)entriesForString:(id)arg1;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(id /* block */)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;

@end
