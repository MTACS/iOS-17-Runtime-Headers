
@interface IKShelfElement : IKCollectionElement

@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool isCentered;
@property (nonatomic, readonly) NSString *rowHeight;

- (unsigned long long)columnCount;
- (bool)isCentered;
- (id)rowHeight;

@end
