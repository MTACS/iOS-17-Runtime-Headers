
@interface SGEntityTag : NSObject <NSCopying> {
    bool  _indexed;
    NSString * _label;
    bool  _stored;
    bool  _tracked;
    NSString * _value;
}

@property (nonatomic, readonly) bool indexed;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) bool stored;
@property (nonatomic, readonly) bool tracked;
@property (nonatomic, readonly) NSString *value;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

+ (id)allDay;
+ (id)allExtractedEventTags;
+ (id)allTags;
+ (id)appleMailMessageId:(id)arg1 fromSource:(id)arg2;
+ (id)calendarAppUsageLevel:(float)arg1;
+ (id)categoryTagWithCategoryType:(int)arg1;
+ (id)confidenceScore:(float)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)defaultDuration;
+ (id)domain:(id)arg1;
+ (id)ekEventAvailabilityState:(id)arg1;
+ (id)entityTagToEventCategoryMapping;
+ (id)eventCategoryToEntityTagMapping;
+ (id)eventHash:(id)arg1;
+ (id)eventMetadata:(id)arg1;
+ (id)extraKey:(id)arg1;
+ (id)extractedBoat;
+ (id)extractedBus;
+ (id)extractedCarRental;
+ (id)extractedEvent;
+ (id)extractedEventCancellation;
+ (id)extractedFlight;
+ (id)extractedFood;
+ (id)extractedFromTemplateWithName:(id)arg1;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)extractedHotel;
+ (id)extractedMovie;
+ (id)extractedSocial;
+ (id)extractedTicket;
+ (id)extractedTrain;
+ (id)fieldReverseMapped:(id)arg1;
+ (id)fromCalendarAttachment;
+ (id)fromExtractedDomain;
+ (id)fromForwardedMessage;
+ (id)fromInteraction;
+ (id)fromReply;
+ (id)fromSync;
+ (id)fromTextMessage;
+ (id)fullyDissected;
+ (id)geocodingModeAddressOnly;
+ (id)geocodingModeAddressThenPOI;
+ (id)geocodingModeAddressWithCanonicalSearch;
+ (id)geocodingModePOIOnly;
+ (id)hardName;
+ (id)human;
+ (id)icsAttachmentData:(id)arg1;
+ (id)inhuman;
+ (void)initialize;
+ (id)intentResponseUserActivityString:(id)arg1;
+ (id)interactionBundleId:(id)arg1;
+ (id)interactionContactIdentifier:(id)arg1;
+ (id)interactionGroupId:(id)arg1;
+ (id)interactionId:(id)arg1;
+ (id)interactionTeamId:(id)arg1;
+ (id)isPartiallyDownloaded;
+ (id)isSent;
+ (id)mailAppUsageLevel:(unsigned char)arg1;
+ (id)mailboxIdentifier:(id)arg1;
+ (id)mailingListId:(id)arg1;
+ (id)managedSourceAccount:(id)arg1;
+ (id)messageWithMailMessageKey:(id)arg1;
+ (id)messageWithMessageId:(id)arg1 fromSource:(id)arg2;
+ (id)messagesAppUsageLevel:(unsigned char)arg1;
+ (id)naturalLanguageEvent;
+ (id)naturalLanguageEventAttributes:(unsigned long long)arg1;
+ (id)naturalLanguageEventLanguageID:(id)arg1;
+ (id)naturalLanguageEventTypeIdentifier:(id)arg1;
+ (id)participantCount:(unsigned char)arg1;
+ (id)poiFilters:(id)arg1;
+ (id)remember:(id)arg1;
+ (void)rememberLabel:(id)arg1 stored:(bool)arg2 indexed:(bool)arg3 tracked:(bool)arg4;
+ (id)reminderHash:(id)arg1;
+ (id)reminderMetadata:(id)arg1;
+ (id)requiresDeferredDissection;
+ (id)reservationContainerReference:(id)arg1;
+ (id)reservationContainerReferenceWithData:(id)arg1;
+ (id)reservationItemReferences:(id)arg1;
+ (id)reservationItemReferencesWithData:(id)arg1;
+ (id)resolveName:(id)arg1;
+ (id)schemaOrg:(id)arg1;
+ (id)significantSender;
+ (id)tagForLabel:(id)arg1 value:(id)arg2;
+ (id)templateException;
+ (id)testTag:(int)arg1;
+ (id)textCalendarAttachment:(id)arg1;
+ (id)timezoneIdentifier:(id)arg1;
+ (id)titleGeneratedFromSubject;
+ (id)titleGeneratedFromTemplate;
+ (void)tombstoneLabel:(id)arg1;
+ (id)url:(id)arg1;
+ (id)usedBubblesCount:(unsigned char)arg1;
+ (id)walletOrderData:(id)arg1;
+ (id)walletOrderDictionary:(id)arg1;
+ (id)walletPassData:(id)arg1;
+ (id)walletPassDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eventMetadata;
- (unsigned long long)hash;
- (id)icsAttachmentData;
- (bool)indexed;
- (id)initWithLabel:(id)arg1 stored:(bool)arg2 indexed:(bool)arg3 tracked:(bool)arg4;
- (id)initWithLabel:(id)arg1 value:(id)arg2 stored:(bool)arg3 indexed:(bool)arg4 tracked:(bool)arg5;
- (id)intentResponseUserActivityString;
- (bool)isAppleMailMessageId;
- (bool)isCalendarAppUsageLevel;
- (bool)isConfidenceScore;
- (bool)isContactDetail;
- (bool)isDomain;
- (bool)isEKEventAvailabilityState;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntityTag:(id)arg1;
- (bool)isEventHash;
- (bool)isEventMetadata;
- (bool)isExtraKey;
- (bool)isExtractedEventCategory;
- (bool)isFieldReverseMapped;
- (bool)isIcsAttachmentData;
- (bool)isIntentResponseUserActivityString;
- (bool)isInteractionBundleId;
- (bool)isInteractionContactIdentifier;
- (bool)isInteractionGroupId;
- (bool)isInteractionId;
- (bool)isInteractionTeamId;
- (bool)isMailAppUsageLevel;
- (bool)isMailboxIdentifier;
- (bool)isMailingListId;
- (bool)isManagedSourceAccount;
- (bool)isMessagesAppUsageLevel;
- (bool)isNaturalLanguageEventAttributes;
- (bool)isNaturalLanguageEventLanguageID;
- (bool)isNaturalLanguageEventTypeIdentifier;
- (bool)isPOIFilters;
- (bool)isParticipantCount;
- (bool)isReminderHash;
- (bool)isReminderMetadata;
- (bool)isReservationContainerReference;
- (bool)isReservationItemReferences;
- (bool)isSchemaOrg;
- (bool)isTemplateName;
- (bool)isTemplateShortName;
- (bool)isUrl;
- (bool)isUsedBubblesCount;
- (bool)isWalletOrderData;
- (bool)isWalletOrderDictionary;
- (bool)isWalletPassData;
- (bool)isWalletPassDictionary;
- (id)label;
- (id)name;
- (id)reminderMetadata;
- (id)reservationContainerReference;
- (id)reservationItemReferences;
- (bool)stored;
- (bool)tracked;
- (id)value;
- (id)walletOrderData;
- (id)walletOrderDictionary;
- (id)walletPassData;
- (id)walletPassDictionary;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)identity:(id)arg1;
+ (id)messageWithEmailKey:(id)arg1;

@end