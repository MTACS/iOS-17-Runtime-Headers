
@interface TLTransliteratorInitParameters : NSObject <NSCopying, NSMutableCopying> {
    NSLocale * _locale;
    NSURL * _modelURL;
}

@property (readonly, copy) NSLocale *locale;
@property (copy) NSURL *modelURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)modelURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setModelURL:(id)arg1;

@end
