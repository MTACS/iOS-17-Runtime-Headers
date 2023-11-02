
@interface ADFlow : NSObject {
    <ADFlowDelegate> * _delegate;
}

@property (nonatomic, retain) <ADFlowDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
