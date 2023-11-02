
@interface INParameterContexts : NSObject <INJSONSerializable> {
    NSDictionary * _operatorsDictionary;
    NSDictionary * _suggestedValuesDictionary;
    NSDictionary * _typedSuggestedValuesDictionary;
}

@property (setter=_setOperatorsDictionary:, nonatomic, retain) NSDictionary *_operatorsDictionary;
@property (setter=_setSuggestedValuesDictionary:, nonatomic, retain) NSDictionary *_suggestedValuesDictionary;
@property (setter=_setTypedSuggestedValuesDictionary:, nonatomic, retain) NSDictionary *_typedSuggestedValuesDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3;
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (bool)_isEmpty;
- (id)_operatorsDictionary;
- (void)_setOperatorsDictionary:(id)arg1;
- (void)_setSuggestedValuesDictionary:(id)arg1;
- (void)_setTypedSuggestedValuesDictionary:(id)arg1;
- (id)_suggestedValuesDictionary;
- (id)_typedSuggestedValuesDictionary;
- (void)_updateOperatorsForIntent:(id)arg1 JSONDictionary:(id)arg2;
- (void)_updateSuggestedValuesForIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3;
- (id)valueForUndefinedKey:(id)arg1;

@end
