
@interface HKMultimap : NSObject <NSCopying> {
    NSMapTable * _table;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)multimapWithStrongObjects;
+ (id)multimapWithWeakObjects;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectsForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
