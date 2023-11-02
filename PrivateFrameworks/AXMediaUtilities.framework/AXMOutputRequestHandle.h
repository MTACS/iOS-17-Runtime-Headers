
@interface AXMOutputRequestHandle : NSObject {
    NSMutableArray * _actionHandles;
}

@property (nonatomic, readonly) NSArray *actionHandles;

- (void).cxx_destruct;
- (id)actionHandles;
- (void)addActionHandle:(id)arg1;
- (id)init;

@end
