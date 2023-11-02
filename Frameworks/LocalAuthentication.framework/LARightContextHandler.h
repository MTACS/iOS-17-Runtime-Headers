
@interface LARightContextHandler : NSObject <LAContextObserver> {
    LAContext * _context;
    <LARightContextHandlerDelegate> * _delegate;
}

@property (nonatomic, retain) LAContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LARightContextHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (void)contextDidBecomeInvalid:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
