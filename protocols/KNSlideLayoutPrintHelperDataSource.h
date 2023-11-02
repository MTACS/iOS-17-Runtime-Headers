
@protocol KNSlideLayoutPrintHelperDataSource <NSObject>

@required

- (unsigned long long)printHelper:(KNSlideLayoutPrintHelper *)arg1 commentsPageCountForSlideNode:(KNSlideNode *)arg2;
- (NSArray *)printHelper:(KNSlideLayoutPrintHelper *)arg1 noteSegmentsForSlideNode:(KNSlideNode *)arg2;
- (NSArray *)slideNodesForPrintHelper:(KNSlideLayoutPrintHelper *)arg1;

@end
