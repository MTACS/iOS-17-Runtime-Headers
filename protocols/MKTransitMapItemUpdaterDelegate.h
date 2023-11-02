
@protocol MKTransitMapItemUpdaterDelegate <MKTransitItemReferenceDateUpdaterDelegate>

@required

- (<MKMapServiceTicket> *)ticketForTransitMapItemUpdater:(MKTransitMapItemUpdater *)arg1;
- (void)transitMapItemUpdater:(MKTransitMapItemUpdater *)arg1 updatedMapItem:(MKMapItem *)arg2 error:(NSError *)arg3;
- (void)transitMapItemUpdater:(MKTransitMapItemUpdater *)arg1 willUpdateMapItem:(MKMapItem *)arg2;

@end
