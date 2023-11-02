
@interface CloudKit.AssetStreamHandle : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  assetType;
    void chunkHandles;
}

@property (nonatomic, readonly) long long size;

+ (void)makeAssetStreamHandleFrom:(void *)arg1 with:(void *)arg2 for:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 62: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, long double, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, unsigned char, long, out /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, double, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, short, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in double, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
+ (id)networkRequestOptions;

- (void).cxx_destruct;
- (id)init;
- (id)initFrom:(id)arg1 error:(id*)arg2;
- (id)makeAVPlayerItemWith:(id)arg1 options:(id)arg2;
- (id)serializedDataAndReturnError:(id*)arg1;
- (long long)size;

@end
