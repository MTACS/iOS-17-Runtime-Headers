
@protocol PLIndexMappersDataOrigin <NSObject>

@required

- (void)enumerateDerivedIndexMappers:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<PLIndexMapperDataSource><PLIndexMappingCache> *, void*
- (bool)hasDerivedIndexMappers;

@end
