
@interface MPNondurableMediaItem : MPMediaItem {
    unsigned long long  _persistentID;
}

+ (bool)canFilterByProperty:(id)arg1;
+ (id)defaultPropertyValues;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)existsInLibrary;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (bool)isUsableAsRepresentativeItem;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
