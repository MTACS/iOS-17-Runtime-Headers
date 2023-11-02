
@interface PKProductSearchResult : NSObject {
    PKPaymentSetupProductsSectionListItem * _listItem;
    double  _searchDistance;
}

@property (nonatomic, readonly) PKPaymentSetupProductsSectionListItem *listItem;
@property (nonatomic, readonly) double searchDistance;

- (void).cxx_destruct;
- (id)initWithListItem:(id)arg1 searchDistance:(double)arg2;
- (id)listItem;
- (double)searchDistance;

@end
