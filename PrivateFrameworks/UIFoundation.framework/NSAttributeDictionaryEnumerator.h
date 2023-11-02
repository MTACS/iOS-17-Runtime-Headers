
@interface NSAttributeDictionaryEnumerator : NSEnumerator {
    NSAttributeDictionary * dictionary;
    unsigned long long  nextElement;
}

- (void)dealloc;
- (id)initWithAttributeDictionary:(id)arg1;
- (id)nextObject;

@end
