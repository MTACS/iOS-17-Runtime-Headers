
@interface BRQueryStitchingContext : NSObject {
    BRQuery * _query;
    BRNotificationReceiver * _receiver;
}

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1;
- (void)performAsyncOnReceiver:(id /* block */)arg1;

@end
