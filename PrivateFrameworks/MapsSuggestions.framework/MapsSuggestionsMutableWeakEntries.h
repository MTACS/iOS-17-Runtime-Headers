
@interface MapsSuggestionsMutableWeakEntries : NSObject {
    NSPointerArray * _array;
    bool  _dirty;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *strongArray;

- (void).cxx_destruct;
- (void)addWeakObject:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (id)initWithEntries:(id)arg1;
- (id)strongArray;

@end
