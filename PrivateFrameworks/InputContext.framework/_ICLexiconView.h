
@interface _ICLexiconView : NSObject {
    struct _LXLexicon { } * _lexicon;
    NSString * _name;
    unsigned char  _typeFlags;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char typeFlags;

- (void).cxx_destruct;
- (bool)contains:(id)arg1;
- (struct _LXEntry { }*)copyEntryForString:(id)arg1;
- (void)dealloc;
- (struct _LXLexicon { }*)getLexiconImplementation;
- (id)getSortKeyEquivalents:(id)arg1;
- (id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2;
- (id)name;
- (unsigned char)typeFlags;

@end
