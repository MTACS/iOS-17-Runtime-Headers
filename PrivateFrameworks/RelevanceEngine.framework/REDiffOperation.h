
@interface REDiffOperation : NSObject {
    long long  _fromIndex;
    id  _item;
    long long  _toIndex;
    unsigned long long  _type;
}

@property (nonatomic, readonly) long long fromIndex;
@property (nonatomic, readonly) id item;
@property (nonatomic, readonly) long long toIndex;
@property (nonatomic, readonly) unsigned long long type;

+ (id)deleteWithItem:(id)arg1 atIndex:(long long)arg2;
+ (id)insertWithItem:(id)arg1 atIndex:(long long)arg2;
+ (id)moveWithItem:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
+ (id)reloadWithItem:(id)arg1 atIndex:(long long)arg2;

- (void).cxx_destruct;
- (id)description;
- (long long)fromIndex;
- (id)initWithType:(unsigned long long)arg1 item:(id)arg2 toIndex:(long long)arg3 fromIndex:(long long)arg4;
- (id)item;
- (long long)toIndex;
- (unsigned long long)type;

@end
