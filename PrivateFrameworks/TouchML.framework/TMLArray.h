
@interface TMLArray : NSObject {
    NSMutableArray * _array;
}

@property (nonatomic, retain) NSArray *array;
@property (nonatomic, readonly) unsigned long long count;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void).cxx_destruct;
- (void)append:(id)arg1;
- (id)array;
- (unsigned long long)count;
- (id)get:(unsigned long long)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (void)remove:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)set:(unsigned long long)arg1 value:(id)arg2;
- (void)setArray:(id)arg1;

@end
