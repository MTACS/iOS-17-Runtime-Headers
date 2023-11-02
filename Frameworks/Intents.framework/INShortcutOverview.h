
@interface INShortcutOverview : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    INSpeakableString * _descriptiveText;
    INImage * _icon;
    INSpeakableString * _name;
    NSArray * _steps;
    INSpeakableString * _voiceCommand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INSpeakableString *descriptiveText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INImage *icon;
@property (nonatomic, readonly, copy) INSpeakableString *name;
@property (nonatomic, readonly, copy) NSArray *steps;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *voiceCommand;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)descriptiveText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 voiceCommand:(id)arg2 icon:(id)arg3 descriptiveText:(id)arg4 steps:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)steps;
- (id)voiceCommand;

@end
