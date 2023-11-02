
@interface TPMachineIDList : NSObject {
    NSArray * _entries;
}

@property (readonly) NSArray *entries;

- (void).cxx_destruct;
- (id)description;
- (id)entries;
- (id)entryFor:(id)arg1;
- (id)initWithEntries:(id)arg1;
- (id)machineIDsInStatus:(unsigned long long)arg1;

@end
