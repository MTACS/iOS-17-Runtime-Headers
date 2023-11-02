
@interface SACardSnippet : SAUISnippet

@property (nonatomic, copy) NSData *cardData;
@property (nonatomic, copy) NSData *compactSizeCardData;
@property (nonatomic, copy) NSArray *contextItems;
@property (nonatomic, copy) NSArray *referencedCommands;
@property (nonatomic, copy) NSArray *referencedSnippets;
@property (nonatomic, copy) NSString *responseViewId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)cardData;
- (id)compactSizeCardData;
- (id)contextItems;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)referencedCommands;
- (id)referencedSnippets;
- (id)responseViewId;
- (void)setCardData:(id)arg1;
- (void)setCompactSizeCardData:(id)arg1;
- (void)setContextItems:(id)arg1;
- (void)setReferencedCommands:(id)arg1;
- (void)setReferencedSnippets:(id)arg1;
- (void)setResponseViewId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)siriui_card;
- (id)siriui_card_compact;
- (id)siriui_eventInfo;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (id)_uufrShownRequestedByInstrumentationManager:(id)arg1;
- (id)siriui_card;
- (id)siriui_card_compact;
- (id)siriui_eventInfo;

@end
