
@interface MDMBlockOperationContext : NSObject {
    MDMBlockOperation * _operation;
}

@property (nonatomic, retain) MDMBlockOperation *operation;

- (void).cxx_destruct;
- (void)endBlockOperation;
- (id)operation;
- (void)setOperation:(id)arg1;

@end
