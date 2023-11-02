
@interface BWTrackedSurface : NSObject {
    int  _clientUseCount;
    id /* block */  _handler;
    bool  _owningPixelBufferDeallocated;
    struct __IOSurface { } * _surface;
}

@property (nonatomic) int clientUseCount;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic) bool owningPixelBufferDeallocated;
@property (nonatomic, readonly) struct __IOSurface { }*surface;

- (int)clientUseCount;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithSurface:(struct __IOSurface { }*)arg1 handler:(id /* block */)arg2;
- (bool)owningPixelBufferDeallocated;
- (void)setClientUseCount:(int)arg1;
- (void)setOwningPixelBufferDeallocated:(bool)arg1;
- (struct __IOSurface { }*)surface;

@end
