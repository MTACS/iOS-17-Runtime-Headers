
@interface PXGadgetNavigationItem : NSObject {
    bool  _animated;
    <PXGadget> * _gadget;
    NSString * _gadgetId;
    unsigned long long  _gadgetType;
    id /* block */  _navigationBlock;
    long long  _navigationType;
}

@property (nonatomic, readonly) bool animated;
@property (nonatomic, readonly) <PXGadget> *gadget;
@property (nonatomic, readonly) NSString *gadgetId;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly, copy) id /* block */ navigationBlock;
@property (nonatomic, readonly) long long navigationType;

- (void).cxx_destruct;
- (bool)animated;
- (id)gadget;
- (id)gadgetId;
- (unsigned long long)gadgetType;
- (id)initWithGadetType:(unsigned long long)arg1 navigationBlock:(id /* block */)arg2 animated:(bool)arg3;
- (id)initWithGadget:(id)arg1 navigationBlock:(id /* block */)arg2 animated:(bool)arg3;
- (id)initWithGadgetId:(id)arg1 navigationBlock:(id /* block */)arg2 animated:(bool)arg3;
- (id /* block */)navigationBlock;
- (long long)navigationType;

@end
