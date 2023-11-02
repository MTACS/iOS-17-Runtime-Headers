
@interface VOSVoiceOverCommandInfo : NSObject {
    NSDictionary * _brailleCommands;
}

- (void).cxx_destruct;
- (void)_loadBrailleCommandsIfNecessary;
- (id)brailleCommandsForCategory:(id)arg1;
- (id)brailleVoiceOverCategories;
- (id)localizedNameForCategory:(id)arg1;
- (id)localizedNameForCommand:(id)arg1;

@end
