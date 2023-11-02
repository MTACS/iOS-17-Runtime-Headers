
@protocol CSAttendingService <NSObject>

@required

- (void)startAttendingWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CSAttendingOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stopAttendingWithReason:(long long)arg1;

@optional

- (<CSAttendingServiceDelegate> *)delegate;
- (void)setDelegate:(id <CSAttendingServiceDelegate>)arg1;

@end
