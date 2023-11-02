
@interface _PLLazyPreheatData : NSData {
    NSData * _data;
    NSString * _path;
}

+ (id)dataWithContentsOfFile:(id)arg1;

- (void).cxx_destruct;
- (void)_loadData;
- (const void*)bytes;
- (id)initWithContentsOfFile:(id)arg1;
- (unsigned long long)length;

@end
