
@interface TCImportFontCacheKey : NSObject {
    NSString * _name;
    int  _size;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) int size;

+ (id)createFontCacheKeyForName:(id)arg1 size:(int)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSize:(int)arg1;
- (int)size;

@end
