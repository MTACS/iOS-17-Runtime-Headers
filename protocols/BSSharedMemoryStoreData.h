
@protocol BSSharedMemoryStoreData <NSCopying>

@required

+ (id)deserializeFromReader:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*, unsigned long long, void*

- (bool)isEqual:(id)arg1;
- (bool)serializeToWriter:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*, unsigned long long, void*
- (unsigned long long)serializedDataLength;

@end
