
@protocol OKWidgetViewCollection <NSObject>

@required

- (OKWidgetView *)collectionItemAtIndexPath:(NSIndexPath *)arg1;
- (OKWidgetView *)collectionItemForName:(NSString *)arg1;
- (unsigned long long)collectionItemsCount;
- (NSArray *)collectionItemsNames;

@end
