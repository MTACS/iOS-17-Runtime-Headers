
@interface LiveFSFPClusterEnumeratorHelper : NSObject <NSFileProviderEnumerator> {
    LiveFSFPItemHelper * _enumeratedItem;
    bool  _isDir;
    int  _state;
    LiveFSFPExtensionHelper * ext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) LiveFSFPItemHelper *enumeratedItem;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDir;
@property int state;
@property (readonly) Class superclass;

+ (id)newWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)doShutdown;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)enumeratedItem;
- (id)initWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id*)arg3;
- (void)invalidate;
- (bool)isDir;
- (void)setState:(int)arg1;
- (int)state;

@end
