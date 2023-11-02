
@interface CNInhibitor : NSObject <CNInhibitor> {
    bool  _debugIsInhibiting;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool debugIsInhibiting;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)os_transactionInhibitorWithLabel:(id)arg1;
+ (id)runningboardInhibitorWithExplanation:(id)arg1;
+ (id)suddenTerminationInhibitor;
+ (id)suddenTerminationInhibitorWithProcessInfo:(id)arg1;

- (void)dealloc;
- (bool)debugIsInhibiting;
- (void)setDebugIsInhibiting:(bool)arg1;
- (void)start;
- (void)stop;

@end
