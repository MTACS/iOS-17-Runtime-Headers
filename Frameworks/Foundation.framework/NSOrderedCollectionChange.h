
@interface NSOrderedCollectionChange : NSObject {
    unsigned long long  _associatedIndex;
    long long  _changeType;
    unsigned long long  _index;
    id  _object;
}

@property (readonly) unsigned long long associatedIndex;
@property (readonly) long long changeType;
@property (readonly) unsigned long long index;
@property (readonly) id object;

+ (id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3;
+ (id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4;

- (unsigned long long)associatedIndex;
- (long long)changeType;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)init;
- (id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3;
- (id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
