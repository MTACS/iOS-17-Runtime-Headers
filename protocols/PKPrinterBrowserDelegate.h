
@protocol PKPrinterBrowserDelegate <NSObject>

@required

- (void)addPrinter:(PKPrinter *)arg1 moreComing:(bool)arg2;
- (void)removePrinter:(PKPrinter *)arg1 moreGoing:(bool)arg2;

@optional

- (void)proximityUpdatedForPrinter:(PKPrinter *)arg1;

@end
