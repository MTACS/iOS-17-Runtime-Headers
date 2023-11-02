
@interface _SUUIDynamicGridSizeCacheKey : NSObject <NSCopying> {
    long long  _position;
    SUUIViewElement * _viewElement;
}

@property (nonatomic) long long position;
@property (nonatomic, retain) SUUIViewElement *viewElement;

- (void).cxx_destruct;
- (bool)__isSUUIDynamicGridSizeCacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (void)setViewElement:(id)arg1;
- (id)viewElement;

@end
