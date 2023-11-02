
@interface AVCustomRoutingPartialIP : NSObject {
    NSData * _address;
    NSData * _mask;
}

@property (nonatomic, readonly, copy) NSData *address;
@property (nonatomic, readonly, copy) NSData *mask;

- (id)address;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 mask:(id)arg2;
- (id)mask;

@end
