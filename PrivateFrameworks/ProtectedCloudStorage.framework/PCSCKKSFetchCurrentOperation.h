
@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation {
    PCSCKKSItemModifyContext * _context;
}

@property (retain) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (id)context;
- (void)fetchComplete:(id)arg1 point:(id)arg2 error:(id)arg3;
- (void)fetchCurrentItem:(id)arg1 viewhint:(id)arg2 complete:(id /* block */)arg3;
- (void)fetchPersistentRef:(id)arg1;
- (id)initWithItemModifyContext:(id)arg1;
- (void)setContext:(id)arg1;
- (void)start;

@end
