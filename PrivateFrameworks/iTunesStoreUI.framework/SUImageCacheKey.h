
@interface SUImageCacheKey : NSObject <NSCopying> {
    SUImageDataProvider * _dataProvider;
    NSURL * _url;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
