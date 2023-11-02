
@interface _MKMapItemAttributionProviderLogoImageCache : NSObject {
    NSCache * _cache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)imageForKey:(id)arg1;
- (id)init;
- (void)setImage:(id)arg1 forKey:(id)arg2;

@end
