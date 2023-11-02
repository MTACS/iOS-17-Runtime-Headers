
@interface PCSCKKSSyncViewOperation : PCSCKKSOperation {
    CKKSControl * _CKKSControl;
    PCSCKKSItemModifyContext * _context;
    NSString * _view;
}

@property (retain) CKKSControl *CKKSControl;
@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) NSString *view;

- (void).cxx_destruct;
- (id)CKKSControl;
- (void)checkTLKStatus;
- (id)context;
- (bool)ensureControl;
- (id)initWithItemModifyContext:(id)arg1;
- (void)setCKKSControl:(id)arg1;
- (void)setView:(id)arg1;
- (void)start;
- (void)syncView;
- (id)view;

@end
