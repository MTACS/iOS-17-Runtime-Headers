
@interface BRCShareAcceptWaiterInfo : NSObject {
    NSMutableArray * _waiterBlocks;
}

@property (nonatomic, readonly) NSMutableArray *waiterBlocks;

- (void).cxx_destruct;
- (id)init;
- (id)waiterBlocks;

@end
