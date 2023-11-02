
@interface UIKeyboardUIService : NSObject <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener * _bsConnectionlistener;
    CAContext * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _slots;
}

@property (nonatomic, readonly) CAContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceInterface;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)clearSlots;
- (id)context;
- (void)createContext;
- (int)createSlot:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
