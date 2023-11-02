
@interface PXStoryMusicCurationProviderOptions : NSObject <NSCopying> {
    NSSet * _categories;
    unsigned long long  _logContext;
}

@property (nonatomic, copy) NSSet *categories;
@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)logContext;
- (void)setCategories:(id)arg1;
- (void)setLogContext:(unsigned long long)arg1;

@end
