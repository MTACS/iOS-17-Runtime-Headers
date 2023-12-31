
@interface AXMTask : NSObject {
    bool  _complete;
    id /* block */  _taskCompleteBlock;
}

@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic, copy) id /* block */ taskCompleteBlock;

- (void).cxx_destruct;
- (bool)isComplete;
- (void)markAsComplete:(bool)arg1;
- (void)setComplete:(bool)arg1;
- (void)setTaskCompleteBlock:(id /* block */)arg1;
- (id /* block */)taskCompleteBlock;

@end
