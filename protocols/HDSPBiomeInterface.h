
@protocol HDSPBiomeInterface <NSObject>

@required

- (void)sendEvent:(id <BMStoreData>)arg1 toStream:(id <BMSourceStream>)arg2;
- (id)subscribe:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 7: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BMStoreData> *, void*

@end
