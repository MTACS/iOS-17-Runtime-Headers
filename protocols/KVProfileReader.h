
@protocol KVProfileReader <NSObject>

@required

+ (id)new;

- (NSData *)data;
- (bool)enumerateDatasetsWithError:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 7: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSObject<KVDatasetReader> *, void*
- (id)init;
- (KVProfileInfo *)profileInfo;

@end
