
@interface CMProxPDPManager : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) CMProxPDPManagerInternal *_internal;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)startPDPUpdatesWithHandler:(id /* block */)arg1;

@end
