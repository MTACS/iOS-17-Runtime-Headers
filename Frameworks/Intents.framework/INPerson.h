
@interface INPerson : NSObject <INCacheableContainer, INCodableAttributeRelationComparing, INImageProxyInjecting, INKeyImageProducing, INPersonExport, INSpeakable, NSCopying, NSMutableCopying, NSSecureCoding, REDonatedActionIdentifierProviding> {
    NSArray * _aliases;
    NSString * _contactIdentifier;
    bool  _contactSuggestion;
    NSString * _customIdentifier;
    NSString * _displayName;
    INImage * _image;
    bool  _isMe;
    NSPersonNameComponents * _nameComponents;
    INPersonHandle * _personHandle;
    NSString * _phonemeData;
    NSString * _relationship;
    NSArray * _scoredAlternatives;
    long long  _searchProvider;
    NSString * _sourceAppBundleIdentifier;
    long long  _suggestionType;
    NSString * _userInput;
}

@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly, copy) NSArray *aliases;
@property (nonatomic, copy) NSArray *aliases;
@property (nonatomic, readonly, copy) NSArray *alternativeSiriMatches;
@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (getter=isContactSuggestion, nonatomic, readonly) bool contactSuggestion;
@property (nonatomic, copy) NSString *customIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, copy) NSString *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) INImage *image;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic) bool isMe;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) INPersonHandle *personHandle;
@property (nonatomic, copy) NSString *phonemeData;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, copy) NSString *relationship;
@property (nonatomic, copy) NSArray *scoredAlternatives;
@property (nonatomic) long long searchProvider;
@property (nonatomic, readonly, copy) NSArray *siriMatches;
@property (nonatomic, copy) NSString *sourceAppBundleIdentifier;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (nonatomic, readonly) long long suggestionType;
@property (nonatomic) long long suggestionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userIdentifier;
@property (nonatomic, readonly, copy) NSString *userName;
@property (nonatomic, readonly, copy) NSString *userURIString;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)expectedCNContactKeys;
+ (bool)supportsSecureCoding;
+ (id)toNilScoredPersons:(id)arg1;

- (void).cxx_destruct;
- (id)_aliases;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (id)_displayName;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(bool)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14 isContactSuggestion:(bool)arg15;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(bool)arg11 scoredAlternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14 isContactSuggestion:(bool)arg15 searchProvider:(long long)arg16;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_indexingRepresentation;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_keyImage;
- (id)_userInput;
- (id)aliases;
- (id)alternativeSiriMatches;
- (id)alternativeSpeakableMatches;
- (id)alternatives;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)fullName;
- (id)handle;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isContactSuggestion:(bool)arg7 suggestionType:(long long)arg8;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(bool)arg7;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(bool)arg7 suggestionType:(long long)arg8;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 relationship:(id)arg7;
- (bool)isContactSuggestion;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (id)lastName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nameComponents;
- (id)personHandle;
- (id)phonemeData;
- (id)pronunciationHint;
- (id)relationship;
- (id)scoredAlternatives;
- (long long)searchProvider;
- (void)setAliases:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setCustomIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setPersonHandle:(id)arg1;
- (void)setPhonemeData:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setScoredAlternatives:(id)arg1;
- (void)setSearchProvider:(long long)arg1;
- (void)setSourceAppBundleIdentifier:(id)arg1;
- (void)setSuggestionType:(long long)arg1;
- (id)siriMatches;
- (id)sourceAppBundleIdentifier;
- (id)spokenPhrase;
- (id)spokenPhrases;
- (long long)suggestionType;
- (id)userIdentifier;
- (id)userName;
- (id)userURIString;
- (id)vocabularyIdentifier;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (id)acs_formattedPersonName;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

+ (id)__im_assistant_displayNameForContact:(id)arg1 displayFormattedHandle:(id)arg2 normalizedHandle:(id)arg3;
+ (id)__im_personFromSPIHandle:(id)arg1 contact:(id)arg2;

- (id)__im_assistant_allContactIdentifiers;
- (id)__im_assistant_initAnonymousRecipientWithIMHandle:(id)arg1;
- (id)__im_assistant_initForContactResolutionResultWithContact:(id)arg1 type:(long long)arg2 label:(id)arg3;
- (id)__im_assistant_initWithContact:(id)arg1 displayFormattedHandle:(id)arg2 normalizedHandle:(id)arg3 type:(long long)arg4 label:(id)arg5;
- (id)__im_assistant_initWithContact:(id)arg1 imHandle:(id)arg2;
- (id)__im_assistant_initWithContact:(id)arg1 imHandle:(id)arg2 type:(long long)arg3 label:(id)arg4;
- (id)__im_assistant_initWithContact:(id)arg1 unformattedPersonHandle:(id)arg2 accountDataSource:(id)arg3;
- (id)__im_assistant_initWithHandleFromContact:(id)arg1 accountDataSource:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)initWithContact:(id)arg1 handle:(id)arg2;

@end