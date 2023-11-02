
@interface SearchUIPurchaseRequestButton : SearchUIRequestButton {
    <NSObject> * _purchaseRequestStatusObserver;
}

@property (nonatomic, retain) <NSObject> *purchaseRequestStatusObserver;

+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (int)getRequestState;
- (id)purchaseRequestStatusObserver;
- (id)requestIdentifier;
- (void)setPurchaseRequestStatusObserver:(id)arg1;
- (void)setupSubscription;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
