
@interface _GEOConfigCache : NSObject {
    id  _cache;
    geo_isolater * _isolator;
}

- (void).cxx_destruct;
- (id)init:(id)arg1;
- (void)withCache:(id /* block */)arg1;

@end
