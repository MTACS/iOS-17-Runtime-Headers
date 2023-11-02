
@interface _DKEvent : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKProtobufConverting> {
    long long  _compatibilityVersion;
    double  _confidence;
    NSDate * _endDate;
    NSDictionary * _metadata;
    bool  _shouldSync;
    NSDate * _startDate;
    _DKEventStream * _stream;
    NSTimeZone * _timeZone;
    _DKObject * _value;
}

@property long long compatibilityVersion;
@property double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (copy) NSDictionary *metadata;
@property bool shouldSync;
@property (retain) NSDate *startDate;
@property (retain) _DKEventStream *stream;
@property (readonly) Class superclass;
@property (retain) NSTimeZone *timeZone;
@property (nonatomic, readonly) TPSAnalyticsEvent *tps_analyticsEvent;
@property (nonatomic, readonly) NSString *tps_bundleIdentifier;
@property (nonatomic, readonly) NSString *tps_contentIdentifier;
@property (nonatomic, readonly) NSString *tps_context;
@property (nonatomic, readonly) unsigned long long tps_displayType;
@property (nonatomic, readonly) NSArray *tps_eligibleContext;
@property (nonatomic, readonly) unsigned long long tps_flags;
@property (nonatomic, readonly) long long tps_ineligibleReason;
@property (nonatomic, readonly) long long tps_state;
@property (retain) _DKObject *value;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)allowedWebpageURLSchemes;
+ (bool)copyMetadata:(id)arg1 toManagedObject:(id)arg2;
+ (id)entityName;
+ (id)eventRepresentingUserActivityWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)eventStreamFromManagedObject:(id)arg1 forValue:(id)arg2 cache:(id)arg3;
+ (id)eventValueFromManagedObject:(id)arg1 streamName:(id)arg2 readMetadata:(bool)arg3 excludedMetadataKeys:(id)arg4 cache:(id)arg5;
+ (id)eventWithInteraction:(id)arg1 bundleIdentifier:(id)arg2 storeKeyImage:(bool)arg3;
+ (id)eventWithRelevantShortcut:(id)arg1 bundleID:(id)arg2;
+ (id)eventWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 categoryIntegerValue:(long long)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 identifierStringValue:(id)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 quantityDoubleValue:(double)arg4 metadata:(id)arg5;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 metadata:(id)arg5;
+ (id)fetchCustomMetadataWithName:(id)arg1 valueHash:(id)arg2 context:(id)arg3;
+ (id)fromPBCodable:(id)arg1;
+ (id)fromPBCodable:(id)arg1 skipMetadata:(bool)arg2;
+ (bool)isValidURL:(id)arg1;
+ (id)metadataForInteraction:(id)arg1 storeKeyImage:(bool)arg2;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(bool)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;
+ (id)relatedContactIdentifiersFromIntent:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)uncachedEventValueFromManagedObject:(id)arg1 readMetadata:(bool)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;

- (void).cxx_destruct;
- (id)_initWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
- (bool)boolValue;
- (long long)compareValue:(id)arg1;
- (long long)compatibilityVersion;
- (double)confidence;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)eventValueClassOf:(id)arg1;
- (void)fetchInteractionWithPopulatedKeyImage:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7;
- (long long)integerValue;
- (id)interaction;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)metadataFromCustomMetadata:(id)arg1;
- (id)metadataFromCustomMetadata:(id)arg1 cache:(id)arg2;
- (id)metadataFromStructuredMetadata:(id)arg1 excludedMetadataKeys:(id)arg2;
- (id)metadataFromStructuredMetadata:(id)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3;
- (id)primaryValue;
- (id)relevantShortcut;
- (void)setCompatibilityVersion:(long long)arg1;
- (void)setConfidence:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setShouldSync:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldSync;
- (id)startDate;
- (id)stream;
- (id)stringValue;
- (id)timeZone;
- (id)toPBCodable;
- (id)toPBCodableUseStructuredMetadata:(bool)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)atx_bundleID;
- (id)atx_convertToLocationVisitEvent;
- (id)atx_efficientRelevantShortcut;
- (id)atx_endDate;
- (double)atx_eventDuration;
- (id)atx_mode;
- (id)atx_startDate;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (id)cls_album;
- (id)cls_artist;
- (id)cls_durationInSeconds;
- (id)cls_genre;
- (id)cls_identifier;
- (id)cls_title;

// Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI

- (double)duration;
- (bool)includesDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore

+ (id)_eventWithTipIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 flags:(unsigned long long)arg6 state:(long long)arg7 reason:(long long)arg8 event:(id)arg9 date:(id)arg10;
+ (id)_tps_resolvedContextualDuetEventMetadataKeyPathComponents:(id)arg1 forStream:(id)arg2;
+ (id)tps_resolvedContextualDuetEventKeyPath:(id)arg1 forStream:(id)arg2;

- (id)tps_analyticsEvent;
- (id)tps_bundleIdentifier;
- (id)tps_contentIdentifier;
- (id)tps_context;
- (unsigned long long)tps_displayType;
- (id)tps_eligibleContext;
- (unsigned long long)tps_flags;
- (long long)tps_ineligibleReason;
- (long long)tps_state;

@end
