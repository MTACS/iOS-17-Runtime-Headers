
@interface CAMLLoader : NSObject <CAMLParserDelegate> {
    NSCache * _resourceCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSCache *resourceCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
- (void)CAMLParser:(id)arg1 formatErrorString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (void)CAMLParser:(id)arg1 formatWarningString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
- (id)init;
- (id)loadCAMLFile:(id)arg1;
- (id)resourceCache;
- (void)setResourceCache:(id)arg1;

@end
