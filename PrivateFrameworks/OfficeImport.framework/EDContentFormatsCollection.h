
@interface EDContentFormatsCollection : EDKeyedCollection {
    unsigned long long  mNextContentFormatId;
}

- (void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2;
- (unsigned long long)addObject:(id)arg1;
- (unsigned long long)addOrEquivalentObject:(id)arg1;
- (id)init;
- (bool)isOverwritingKeyOK;
- (void)setupDefaults;

@end
