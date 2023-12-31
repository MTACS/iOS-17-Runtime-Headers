
@interface OITSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _indexByString;
    NSMutableArray * _stringByIndex;
}

- (unsigned long long)count;
- (void)dealloc;
- (unsigned long long)indexForString:(id)arg1;
- (id)init;
- (id)stringForIndex:(unsigned long long)arg1;

@end
