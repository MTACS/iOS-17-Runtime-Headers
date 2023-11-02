
@interface IPAManualAutoSettings : IPAAutoSettings {
    NSMutableDictionary * _state;
}

- (void).cxx_destruct;
- (bool)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
