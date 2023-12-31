
@interface FLHeadlessActionHandler : NSObject {
    FLFollowUpItem * _item;
}

@property (nonatomic, retain) FLFollowUpItem *item;

+ (id)handlerWithItem:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAction:(id)arg1 completion:(id /* block */)arg2;
- (void)handleExtensionBasedAction:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;

@end
