
@protocol AMUIDateProviding <NSObject>

@required

- (NSDate *)date;
- (id)observeMinuteUpdatesWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (void)removeMinuteUpdateHandler:(id)arg1;

@end
