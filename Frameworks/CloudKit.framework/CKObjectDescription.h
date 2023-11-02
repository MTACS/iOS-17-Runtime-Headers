
@interface CKObjectDescription : NSObject {
    bool  _avoidShortDescription;
    NSString * _descriptionPrefix;
    CKOrderedDictionary * _orderedDictionary;
    bool  _printAsDictionary;
    bool  _redact;
}

@property (nonatomic, readonly) bool avoidShortDescription;
@property (nonatomic, retain) NSString *descriptionPrefix;
@property (nonatomic, retain) CKOrderedDictionary *orderedDictionary;
@property (nonatomic) bool printAsDictionary;
@property (nonatomic, readonly) bool redact;

- (void).cxx_destruct;
- (void)_addProperty:(id)arg1 value:(id)arg2 shouldRedact:(bool)arg3;
- (id)_arrayDescription:(id)arg1 shouldRedact:(bool)arg2;
- (id)_dictionaryDescription:(id)arg1 shouldRedact:(bool)arg2;
- (id)_propertyDescriptionForProperty:(id)arg1 shouldRedact:(bool)arg2;
- (void)addBooleanProperty:(id)arg1 value:(bool)arg2;
- (void)addBooleanProperty:(id)arg1 value:(bool)arg2 defaultValue:(long long)arg3;
- (void)addFlagsForKey:(id)arg1 flagsAndConditions:(id)arg2;
- (void)addProperty:(id)arg1 value:(id)arg2 shouldRedact:(bool)arg3;
- (void)addPropertyIfExists:(id)arg1 value:(id)arg2 shouldRedact:(bool)arg3;
- (bool)avoidShortDescription;
- (id)description;
- (id)descriptionPrefix;
- (id)initWithObject:(id)arg1 redact:(bool)arg2;
- (id)initWithObject:(id)arg1 redact:(bool)arg2 avoidShortDescription:(bool)arg3;
- (id)orderedDictionary;
- (bool)printAsDictionary;
- (bool)redact;
- (void)setDescriptionPrefix:(id)arg1;
- (void)setOrderedDictionary:(id)arg1;
- (void)setPrintAsDictionary:(bool)arg1;
- (id)unorderedDictionary;

@end
