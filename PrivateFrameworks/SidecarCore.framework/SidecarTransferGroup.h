
@interface SidecarTransferGroup : NSObject {
    long long  _completedItems;
    NSArray * _mutableItems;
    long long  _type;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (bool)handleMessage:(id)arg1 error:(id*)arg2;
- (id)initWithMessage:(id)arg1;
- (bool)isComplete;
- (id)items;
- (long long)type;

@end
