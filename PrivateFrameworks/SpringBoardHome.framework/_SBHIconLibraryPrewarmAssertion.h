
@interface _SBHIconLibraryPrewarmAssertion : NSObject <BSInvalidatable> {
    SBHIconLibraryTableViewController * _iconLibraryTableViewController;
    bool  _invalidated;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconLibraryTableViewController *iconLibraryTableViewController;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)iconLibraryTableViewController;
- (id)initWithReason:(id)arg1 iconLibraryTableViewController:(id)arg2;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (id)reason;

@end
