
@interface IMMultiQueueItem : NSObject {
    NSString * _GUID;
    id  _block;
    NSString * _describer;
}

@property (nonatomic, readonly) NSString *GUID;
@property (nonatomic, readonly) id block;
@property (nonatomic, readonly) NSString *describer;

- (void).cxx_destruct;
- (id)GUID;
- (id)block;
- (id)describer;
- (id)initWithBlock:(id)arg1 GUID:(id)arg2 description:(id)arg3;

@end
