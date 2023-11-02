
@interface SRCSCommandStringsTable : NSObject {
    NSDictionary * _commandDescriptionsCache;
    NSDictionary * _commandStringsCache;
    NSMutableDictionary * _keyboardKeyNamesCache;
    NSString * _localeIdentifier;
    NSMutableDictionary * _modifierKeyNamesCache;
    NSMutableDictionary * _parameterIdentifiersToExamplesTable;
    NSMutableDictionary * _phoneticKeyNamesCache;
    struct __CFStringTokenizer { } * _wordUnitStringTokenizer;
}

+ (id)activeTargetTypes;
+ (id /* block */)commandStringsLoader;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)deviceName;
+ (id)formattedBuiltInCommandString:(id)arg1;
+ (bool)isLocaleIdentifier:(id)arg1 containedInLocaleIdentifiers:(id)arg2;
+ (bool)isSameLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2;
+ (id)languageModelDictionaryFromCommandText:(id)arg1 parsingErrorString:(id*)arg2;
+ (void)setCommandStringsLoader:(id /* block */)arg1;
+ (id)supportedTargetTypes;

- (void).cxx_destruct;
- (id)_commandDescriptionsTable;
- (id)_commandStringsDictionaryForLocaleIdentifier:(id)arg1;
- (id)_commandStringsTable;
- (id)_descriptionTypeForParameterIdentifier:(id)arg1 commandIdentifier:(id)arg2;
- (id)_exampleStringPermutationsFromCommandIdentifier:(id)arg1;
- (void)_flushCommandStringsTable;
- (id)_keyboardKeyNamesTable;
- (id)_modifierKeyNamesTable;
- (id)_phoneticKeyNamesTable;
- (void)_removeDuplicateSpacesFromMutableString:(id)arg1;
- (id)_rootCommandIdentifierFrom:(id)arg1 foundTargetType:(id*)arg2;
- (id)_spokenStringPermutationOfLanguageModelDictionary:(id)arg1 givenPermutation:(unsigned short*)arg2 stringsTable:(id)arg3 segmentOffsets:(id)arg4;
- (id)_warningsOfIncorrectTokenizationAcrossSegmentBoundariesInLanguageModelDictionary:(id)arg1 stringsTable:(id)arg2;
- (unsigned long long)countOptionalNodesOfLanguageModelDictionary:(id)arg1;
- (void)dealloc;
- (id)descriptionStringForCommandIdentifier:(id)arg1 descriptionType:(id)arg2 targetTypes:(id)arg3;
- (id)exampleParameterStringsTable;
- (id)initWithLocaleIdentifier:(id)arg1;
- (bool)isSupportedCommandIdentifier:(id)arg1 forLocaleIdentifier:(id)arg2;
- (bool)isSupportedCommandIdentifier:(id)arg1 forTargetTypes:(id)arg2;
- (id)languageModelDictionaryForCommandIdentifier:(id)arg1 targetType:(id)arg2 parsingErrorString:(id*)arg3;
- (id)languageModelDictionaryForCommandIdentifier:(id)arg1 targetTypes:(id)arg2 parsingErrorString:(id*)arg3;
- (id)mutableAttributedStringByReplacingPlaceholderAttribute:(id)arg1 withAttributeName:(id)arg2 inAttributedString:(id)arg3 withValueTable:(id)arg4;
- (id)mutableAttributedStringCommandDescriptionForCommandIdentifier:(id)arg1 calculateDisplayedAttributedStringWidthBlock:(id /* block */)arg2;
- (id)parameterIdentifiersFromCommandIdentifier:(id)arg1;
- (void)resolveReferencesInMutableAttributedString:(id)arg1 stringsTable:(id)arg2;
- (id)rowDataForTargetTypes:(id)arg1;
- (id)setOfBuiltInIdentifiersFromLanguageModelDictionary:(id)arg1;
- (id)spokenStringPermutationOfLanguageModelDictionary:(id)arg1 givenPermutation:(unsigned short*)arg2 stringsTable:(id)arg3;
- (id)spokenStringPermutationsOfLanguageModelDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)spokenStringPermutationsOfLanguageModelDictionary:(id)arg1 stringsTable:(id)arg2 restrictPermutationsToShortestAndLongest:(bool)arg3;
- (id)supportedCommandIdentifiersForTargetTypes:(id)arg1;
- (id)unparsedCommandTextForCommandIdentifier:(id)arg1 targetTypes:(id)arg2;
- (id)warningStringForText:(id)arg1 identifier:(id)arg2 textTable:(id)arg3;

@end
