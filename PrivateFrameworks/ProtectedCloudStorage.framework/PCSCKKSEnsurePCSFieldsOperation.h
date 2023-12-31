
@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation {
    PCSCKKSItemModifyContext * _context;
}

@property (retain) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (id)context;
- (bool)haveCKKSPlaintextEntitlements;
- (id)initWithItemModifyContext:(id)arg1;
- (void)setContext:(id)arg1;
- (void)start;
- (int)updateKeychain:(id)arg1 withAttributes:(id)arg2;

@end
