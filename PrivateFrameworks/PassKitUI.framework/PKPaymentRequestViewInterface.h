
@interface PKPaymentRequestViewInterface : NSObject {
    _TtC9PassKitUI27PaymentRequestViewInterface * _wrappedInterface;
}

@property (nonatomic, readonly) id serviceDelegate;
@property (nonatomic, retain) _TtC9PassKitUI27PaymentRequestViewInterface *wrappedInterface;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)serviceDelegate;
- (void)setWrappedInterface:(id)arg1;
- (void)start;
- (void)stop;
- (id)viewController;
- (id)wrappedInterface;

@end
