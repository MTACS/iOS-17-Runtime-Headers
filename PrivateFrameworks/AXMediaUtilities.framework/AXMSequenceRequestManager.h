
@interface AXMSequenceRequestManager : NSObject {
    VNSequenceRequestHandler * _sequenceRequestHandler;
}

@property (nonatomic, retain) VNSequenceRequestHandler *sequenceRequestHandler;

- (void).cxx_destruct;
- (id)sequenceRequestHandler;
- (void)setSequenceRequestHandler:(id)arg1;

@end
