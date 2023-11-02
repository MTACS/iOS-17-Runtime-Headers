
@interface MKContainerMigrator : MKMigrator {
    NSMutableDictionary * _containers;
    NSDictionary * _signatures;
}

@property (nonatomic, retain) NSDictionary *signatures;

- (void).cxx_destruct;
- (void)import:(id)arg1 signature:(id)arg2 chunk:(id)arg3 filename:(id)arg4 offset:(unsigned long long)arg5 length:(unsigned long long)arg6 total:(unsigned long long)arg7 required:(bool)arg8 excludedFromBackup:(bool)arg9;
- (void)importContainer:(id)arg1 signature:(id)arg2 chunk:(id)arg3 filename:(id)arg4 offset:(unsigned long long)arg5 length:(unsigned long long)arg6 total:(unsigned long long)arg7 required:(bool)arg8 excludedFromBackup:(bool)arg9;
- (id)init;
- (void)setSignatures:(id)arg1;
- (id)signatures;

@end
