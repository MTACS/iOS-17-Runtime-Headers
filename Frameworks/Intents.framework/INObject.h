
@interface INObject : NSObject <INJSONSerializable, INRuntimeObject, INSpeakable, NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding, WFCodableAttributeTransformable, WFINObject, WFNaming> {
    NSArray * _alternativeSpeakableMatches;
    INImage * _displayImage;
    NSString * _displayString;
    NSString * _identifier;
    NSString * _pronunciationHint;
    NSString * _subtitleString;
    NSMutableDictionary * _valueForKeyDictionary;
}

@property (nonatomic, readonly) NSMutableDictionary *_valueForKeyDictionary;
@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (nonatomic, retain) NSArray *alternativeSpeakableMatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionString;
@property (nonatomic, retain) INImage *displayImage;
@property (nonatomic, readonly, copy) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (nonatomic, copy) NSString *subtitleString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)_intents_displayImageWithLocalizer:(id)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;
- (id)_intents_readableSubtitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)_valueForKeyDictionary;
- (id)alternativeSpeakableMatches;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)descriptionString;
- (id)displayImage;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 subtitleString:(id)arg4 displayImage:(id)arg5;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 subtitleString:(id)arg3 displayImage:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)pronunciationHint;
- (void)setAlternativeSpeakableMatches:(id)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setDisplayImage:(id)arg1;
- (void)setSubtitleString:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)spokenPhrase;
- (id)subtitleString;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)vocabularyIdentifier;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wfName;
- (id)wf_initWithIdentifier:(id)arg1 displayString:(id)arg2;
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(id /* block */)arg2;

@end
