
@protocol MKTransitSystemFilterViewDelegate <NSObject>

@required

- (void)filterView:(MKTransitSystemFilterView *)arg1 didChangeSystemSelection:(id <GEOTransitSystem>)arg2;

@end
