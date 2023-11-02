
@interface MKFileMigrator : MKMigrator {
    NSString * _root;
}

- (void).cxx_destruct;
- (void)import:(id)arg1 filename:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 total:(unsigned long long)arg5;
- (void)importChunk:(id)arg1 filename:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 total:(unsigned long long)arg5;
- (id)init;

@end
