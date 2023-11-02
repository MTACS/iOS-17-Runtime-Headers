
@interface WFScanChannel : NSObject <WFScanableChannel> {
    unsigned long long  _channel;
    unsigned long long  _flags;
}

@property (nonatomic) unsigned long long channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)channel;
- (id)description;
- (unsigned long long)flags;
- (id)init;
- (id)initWithChannel:(long long)arg1 flags:(long long)arg2;
- (void)setChannel:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;

@end
