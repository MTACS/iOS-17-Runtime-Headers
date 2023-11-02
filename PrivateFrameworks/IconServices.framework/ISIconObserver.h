
@interface ISIconObserver : NSObject <ISIconManagerObserver> {
    id  _delegate;
}

@property (readonly) <ISIconObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
