
@interface MKPlaceholderMigrator : MKMigrator {
    NSMutableArray * _identifiers;
    MKAppSearchRequest * _request;
}

- (void).cxx_destruct;
- (void)didSearchForPlaceholder:(id)arg1 apps:(id)arg2 error:(id)arg3;
- (void)import:(id)arg1;
- (void)importDataEncodedInJSON:(id)arg1;
- (id)init;
- (void)install:(id)arg1 apps:(id)arg2 error:(id)arg3;
- (void)remove;

@end
