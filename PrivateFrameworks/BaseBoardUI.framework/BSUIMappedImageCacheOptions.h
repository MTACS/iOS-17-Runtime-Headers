
@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {
    <BSPathProviding> * _containerPathProvider;
}

@property (nonatomic, readonly) <BSPathProviding> *containerPathProvider;

+ (id)optionsWithContainerPathProvider:(id)arg1;

- (void).cxx_destruct;
- (id)containerPathProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
