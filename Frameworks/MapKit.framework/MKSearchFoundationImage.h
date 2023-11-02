
@interface MKSearchFoundationImage : SFImage {
    NSObject<OS_dispatch_group> * _group;
    GEOStyleAttribute * _styleAttribute;
    NSURL * _url;
}

- (void).cxx_destruct;
- (id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)loadImageDataWithCompletionAndErrorHandler:(id /* block */)arg1;
- (void)loadImageDataWithCompletionHandler:(id /* block */)arg1;

@end
