
@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _entries;
}

@property (nonatomic, readonly) NSArray *allKeys;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)multiDictionary;
+ (id)multiDictionaryWithEntries:(id)arg1;
+ (id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2;

- (void).cxx_destruct;
- (id)allKeys;
- (bool)containsKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (void)eachObject:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEntries:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectsForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1;

@end
