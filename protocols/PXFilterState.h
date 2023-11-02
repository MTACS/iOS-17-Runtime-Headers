
@protocol PXFilterState <NSCopying>

@required

- (bool)isFiltering;
- (NSString *)localizedDescription;
- (NSString *)localizedFooterDescription;
- (NSPredicate *)predicateForUseCase:(unsigned long long)arg1;

@end
