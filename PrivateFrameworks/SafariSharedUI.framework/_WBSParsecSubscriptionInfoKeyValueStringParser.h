
@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject {
    unsigned long long  _index;
    NSString * _string;
}

+ (id)parseKeyValuePairsFromString:(id)arg1;

- (void).cxx_destruct;
- (unsigned short)_consumeCharacter;
- (id)_initWithString:(id)arg1;
- (bool)_isAtEnd;
- (id)_parseJSONValue;
- (id)_parseKey;
- (bool)_parseKeyValuePairWithKey:(id*)arg1 value:(id*)arg2;
- (id)_parseKeyValuePairs;
- (id)_parseUpToCharacterFromSet:(id)arg1;
- (id)_parseValue;
- (unsigned short)_previewCharacter;
- (void)_skipWhitespace;

@end
