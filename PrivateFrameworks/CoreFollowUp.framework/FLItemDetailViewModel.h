
@interface FLItemDetailViewModel : NSObject <FLViewModel> {
    FLFollowUpController * _controller;
    FLItemChangeObserver * _observer;
    NSSet * _originalItemIdentifiers;
    NSArray * _originalItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allPendingItems;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)setItemChangeHandler:(id /* block */)arg1;

@end
