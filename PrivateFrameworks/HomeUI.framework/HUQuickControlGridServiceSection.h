
@interface HUQuickControlGridServiceSection : NSObject {
    NSMutableArray * _gridControlItems;
    HFServiceItem * _serviceItem;
    NSMutableArray * _supplementaryControlItems;
}

@property (nonatomic, retain) NSMutableArray *gridControlItems;
@property (nonatomic, retain) HFServiceItem *serviceItem;
@property (nonatomic, retain) NSMutableArray *supplementaryControlItems;

- (void).cxx_destruct;
- (id)gridControlItems;
- (id)init;
- (id)serviceItem;
- (void)setGridControlItems:(id)arg1;
- (void)setServiceItem:(id)arg1;
- (void)setSupplementaryControlItems:(id)arg1;
- (id)supplementaryControlItems;

@end
