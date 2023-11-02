
@interface TRIFileBackedMutableStringArray : NSObject {
    unsigned long long  _count;
    int  _fd;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)arrayFromDirectory:(id)arg1;

- (bool)addString:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (bool)enumerateStringsWithBlock:(id /* block */)arg1;
- (id)init;

@end
