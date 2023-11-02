
@interface INInteraction : NSObject <CMSCoding, CRContent, INEnumerable, INImageProxyInjecting, INInteractionExport, INKeyImageProducing, NSCopying, NSSecureCoding> {
    NSUUID * _contextExtensionUUID;
    NSDateInterval * _dateInterval;
    long long  _direction;
    bool  _donatedBySiri;
    NSString * _groupIdentifier;
    NSString * _identifier;
    INIntent * _intent;
    long long  _intentHandlingStatus;
    INIntentResponse * _intentResponse;
    SAUISnippet * _snippet;
}

@property (setter=_setContextExtensionUUID:, nonatomic, copy) NSUUID *_contextExtensionUUID;
@property (setter=_setDonatedBySiri:, nonatomic) bool _donatedBySiri;
@property (readonly) long long _indexingHash;
@property (readonly) INImage *_keyImage;
@property (readonly, copy) CSSearchableItem *_searchableItem;
@property (setter=_setSnippet:, nonatomic, retain) SAUISnippet *_snippet;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (setter=_setIntent:, nonatomic, copy) INIntent *intent;
@property (nonatomic) long long intentHandlingStatus;
@property (setter=_setIntentResponse:, nonatomic, copy) INIntentResponse *intentResponse;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (unsigned long long)_searchableItemVersion;
+ (void)deleteAllInteractionsWithCompletion:(id /* block */)arg1;
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_contextExtensionUUID;
- (id)_dictionaryRepresentation;
- (void)_donateInteractionWithBundleId:(id)arg1 completion:(id /* block */)arg2;
- (bool)_donatedBySiri;
- (long long)_indexingHash;
- (id)_init;
- (id)_initWithIntent:(id)arg1 response:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (id)_keyImage;
- (id)_searchableItem;
- (id)_searchableItemIncludingData:(bool)arg1;
- (void)_setContextExtensionUUID:(id)arg1;
- (void)_setDonatedBySiri:(bool)arg1;
- (void)_setIntent:(id)arg1;
- (void)_setIntentResponse:(id)arg1;
- (void)_setSnippet:(id)arg1;
- (id)_snippet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dateInterval;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)direction;
- (id)domainIdentifier;
- (void)donateInteractionWithCompletion:(id /* block */)arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 response:(id)arg2;
- (id)intent;
- (long long)intentHandlingStatus;
- (id)intentResponse;
- (bool)isEqual:(id)arg1;
- (id)parameterValueForParameter:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntentHandlingStatus:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;

// Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory

+ (id)ch_interactionForIdentifier:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)underlyingInteraction;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext

- (id)contextMetadataWithBundleIdentifier:(id)arg1 eventUUID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchemas:(id)arg1;

- (bool)canConvertToSchemaOrg;
- (id)sg_LoggingIdentifier;
- (id)toSchemas;

// Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore

- (void)inc_associateFileURLsWithAuditToken:(struct { unsigned int x1[8]; })arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (void)mtSetIntentDonorFromSource:(id)arg1;

@end
