
@interface WeatherMaps.WeatherMapURLCache : NSURLCache

- (id)cachedResponseForRequest:(id)arg1;
- (void)getCachedResponseForDataTask:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 44: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, int, out in long double, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned char, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, double, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out in short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 directoryURL:(id)arg3;
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 diskPath:(id)arg3;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;

@end
