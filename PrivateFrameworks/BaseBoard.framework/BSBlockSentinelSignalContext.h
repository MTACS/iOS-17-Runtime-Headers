
@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext> {
    bool  _complete;
    id  _context;
    bool  _failed;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, readonly) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFailed, nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (bool)isComplete;
- (bool)isFailed;

@end
