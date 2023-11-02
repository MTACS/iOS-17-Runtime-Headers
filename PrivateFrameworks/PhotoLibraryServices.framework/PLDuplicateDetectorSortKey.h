
@interface PLDuplicateDetectorSortKey : NSObject {
    NSString * _key;
    bool  _reverse;
}

@property (retain) NSString *key;
@property bool reverse;

+ (id)sortKey:(id)arg1 reverse:(bool)arg2;

- (void).cxx_destruct;
- (id)key;
- (bool)reverse;
- (void)setKey:(id)arg1;
- (void)setReverse:(bool)arg1;

@end
