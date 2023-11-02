
@interface SAUIAssistantUtteranceView : SAAceView <SRUIFUUFRSayable>

@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic, copy) NSNumber *postDialogDelayInMilliseconds;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)assistantUtteranceView;
+ (id)assistantUtteranceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)postDialogDelayInMilliseconds;
- (void)setDialogIdentifier:(id)arg1;
- (void)setPostDialogDelayInMilliseconds:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)_af_dialogIdentifier;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifier;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (bool)af_isUtterance;
- (id)af_speakableText;
- (id)af_text;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_insertionContext;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (id)_uufrShownRequestedByInstrumentationManager:(id)arg1;
- (id)sruif__uufrSaid;
- (id)sruif_insertionContext;
- (bool)sruif_isUtterance;

// Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX

- (void)svx_applyParsedExpression:(id)arg1;
- (id)svx_parseableExpression;

@end
