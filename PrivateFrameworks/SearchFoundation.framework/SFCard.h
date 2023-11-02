
@interface SFCard : NSObject <CRCard, NSCopying, NSSecureCoding, SFCard> {
    SFColor * _backgroundColor;
    NSString * _cardId;
    NSArray * _cardSections;
    NSString * _contextReferenceIdentifier;
    NSArray * _dismissalCommands;
    SFDrillDownMetadata * _drilldownMetadata;
    NSData * _entityIdentifier;
    NSArray * _entityProtobufMessages;
    NSString * _fbr;
    bool  _flexibleSectionOrder;
    struct { 
        unsigned int flexibleSectionOrder : 1; 
        unsigned int queryId : 1; 
        unsigned int source : 1; 
        unsigned int type : 1; 
    }  _has;
    NSData * _intentMessageData;
    NSString * _intentMessageName;
    NSData * _intentResponseMessageData;
    NSString * _intentResponseMessageName;
    SFDrillDownMetadata * _metadata;
    NSData * _originalCardData;
    unsigned long long  _queryId;
    NSString * _resultIdentifier;
    int  _source;
    NSString * _title;
    SFImage * _titleImage;
    int  _type;
    NSURL * _urlValue;
}

@property (setter=acs_setInteraction:, nonatomic, retain) INInteraction *acs_interaction;
@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, readonly) SFCard *backingCard;
@property (nonatomic, readonly) unsigned long long cardFormat;
@property (nonatomic, copy) NSString *cardId;
@property (nonatomic, readonly, copy) NSString *cardIdentifier;
@property (nonatomic, readonly) NSArray *cardSections;
@property (copy) NSArray *cardSections;
@property (nonatomic, copy) NSString *contextReferenceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSArray *dismissalCommands;
@property (nonatomic, copy) NSArray *dismissalCommands;
@property (nonatomic, retain) SFDrillDownMetadata *drilldownMetadata;
@property (nonatomic, copy) NSData *entityIdentifier;
@property (nonatomic, copy) NSArray *entityProtobufMessages;
@property (nonatomic, copy) NSString *fbr;
@property (nonatomic, readonly) bool flexibleSectionOrder;
@property (nonatomic) bool flexibleSectionOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *intentMessageData;
@property (nonatomic, copy) NSString *intentMessageName;
@property (nonatomic, copy) NSData *intentResponseMessageData;
@property (nonatomic, copy) NSString *intentResponseMessageName;
@property (nonatomic, readonly) NSSet *interactions;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFDrillDownMetadata *metadata;
@property (getter=_originalCardData, setter=_setOriginalCardData:, nonatomic, copy) NSData *originalCardData;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) SFImage *titleImage;
@property (nonatomic) int type;
@property (nonatomic, copy) NSURL *urlValue;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_originalCardData;
- (void)_setOriginalCardData:(id)arg1;
- (id)backgroundColor;
- (id)cardId;
- (id)cardSections;
- (id)contextReferenceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dismissalCommands;
- (id)drilldownMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (id)entityProtobufMessages;
- (id)fbr;
- (bool)flexibleSectionOrder;
- (bool)hasFlexibleSectionOrder;
- (bool)hasQueryId;
- (bool)hasSource;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)intentMessageData;
- (id)intentMessageName;
- (id)intentResponseMessageData;
- (id)intentResponseMessageName;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(id /* block */)arg1;
- (void)loadCardSectionsWithCompletionHandler:(id /* block */)arg1;
- (id)metadata;
- (unsigned long long)queryId;
- (id)resultIdentifier;
- (void)setBackgroundColor:(id)arg1;
- (void)setCardId:(id)arg1;
- (void)setCardSections:(id)arg1;
- (void)setContextReferenceIdentifier:(id)arg1;
- (void)setDismissalCommands:(id)arg1;
- (void)setDrilldownMetadata:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntityProtobufMessages:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setFlexibleSectionOrder:(bool)arg1;
- (void)setIntentMessageData:(id)arg1;
- (void)setIntentMessageName:(id)arg1;
- (void)setIntentResponseMessageData:(id)arg1;
- (void)setIntentResponseMessageName:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrlValue:(id)arg1;
- (int)source;
- (id)title;
- (id)titleImage;
- (int)type;
- (id)urlValue;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

+ (id)acs_uniquelyIdentifiedCard;

- (id)acs_interaction;
- (void)acs_setInteraction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (bool)afui_hasContentEqualTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

+ (id)_interactionsByIntentDataHashes;

- (id)_interactionDataKey;
- (bool)asynchronous;
- (id)backingCard;
- (unsigned long long)cardFormat;
- (id)cardIdentifier;
- (id)interaction;
- (id)interactions;
- (void)loadCardWithCompletion:(id /* block */)arg1;
- (id)underlyingInteraction;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)copyForFeedback;

@end
