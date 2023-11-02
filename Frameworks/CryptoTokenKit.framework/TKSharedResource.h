
@interface TKSharedResource : NSObject {
    TKSharedResourceSlot * _slot;
}

@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSlot:(id)arg1;
- (id)object;

@end
