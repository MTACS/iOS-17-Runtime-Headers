
@protocol MKLocalSearchCompleterDelegate <NSObject>

@optional

- (void)completer:(MKLocalSearchCompleter *)arg1 didFailWithError:(NSError *)arg2;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1;

@end
