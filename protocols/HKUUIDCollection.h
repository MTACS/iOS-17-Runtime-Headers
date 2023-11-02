
@protocol HKUUIDCollection <NSObject, NSCopying>

@required

- (NSData *)hk_dataForAllUUIDs;
- (bool)hk_enumerateUUIDsWithError:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 9: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSUUID *, bool*, id*, void*

@end
