
@interface SRCSSpokenCommandUtilities : NSObject {
    NSDictionary * _commandAttributes;
    NSMutableDictionary * _commandStringsTablesByLocaleIdentifier;
}

+ (id)sharedSpokenCommandUtilities;
+ (struct __CFStringTokenizer { }*)wordUnitStringTokenizerRefForLocaleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_flushBuiltInCommandsStringsTable;
- (id)commandAttributes;
- (id)commandStringsTableForLocaleIdentifier:(id)arg1;
- (id)dictionaryForLocaleIdentifier:(id)arg1 bundle:(id)arg2 resourceFileName:(id)arg3 resourceFileExtension:(id)arg4;
- (id)dictionaryForLocaleIdentifier:(id)arg1 bundle:(id)arg2 subDirectory:(id)arg3 rootFileName:(id)arg4 rootFileExtension:(id)arg5;
- (id)dictionaryForLocaleIdentifier:(id)arg1 resourceFileName:(id)arg2 resourceFileExtension:(id)arg3;
- (id)init;

@end
