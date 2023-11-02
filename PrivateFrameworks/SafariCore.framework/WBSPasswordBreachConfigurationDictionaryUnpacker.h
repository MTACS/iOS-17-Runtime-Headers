
@interface WBSPasswordBreachConfigurationDictionaryUnpacker : NSObject {
    NSDictionary * _dictionary;
    bool  _errorOccurred;
}

@property (nonatomic, readonly) bool errorOccurred;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_valueOfClass:(Class)arg1 forKey:(id)arg2 required:(bool)arg3;
- (id)dataFromHexStringForKey:(id)arg1 expectedLength:(id)arg2;
- (bool)errorOccurred;
- (id)initWithDictionary:(id)arg1;
- (bool)optionalBoolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)sortedUnsignedIntegerArrayForKey:(id)arg1 minimumValue:(unsigned long long)arg2 maximumValue:(unsigned long long)arg3 ascending:(bool)arg4;
- (id)stringForKey:(id)arg1 minimumLength:(unsigned long long)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1 minimumValue:(unsigned long long)arg2 maximumValue:(unsigned long long)arg3;

@end
