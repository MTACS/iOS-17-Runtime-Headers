
@interface PKTextInputDebugLogController : NSObject <PKTextInputDebugStateReporting> {
    NSMutableArray * __logEntries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)debugStateCanDisplayDetails;
- (id)debugStateDetailViewController;
- (id)init;
- (void)reportDebugStateDescription:(id /* block */)arg1;

@end
