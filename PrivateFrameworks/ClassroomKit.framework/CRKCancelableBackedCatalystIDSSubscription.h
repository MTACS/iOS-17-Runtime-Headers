
@interface CRKCancelableBackedCatalystIDSSubscription : NSObject <CATIDSSubscription> {
    <CRKCancelable> * _cancelable;
}

@property (nonatomic, readonly) <CRKCancelable> *cancelable;

- (void).cxx_destruct;
- (void)cancel;
- (id)cancelable;
- (id)initWithCancelable:(id)arg1;

@end
