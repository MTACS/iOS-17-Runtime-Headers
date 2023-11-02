
@interface _DKQuery : NSObject <NSSecureCoding> {
    NSString * _clientName;
    bool  _executeConcurrently;
    id /* block */  _tracker;
}

@property (nonatomic, retain) NSString *clientName;
@property (nonatomic) bool executeConcurrently;
@property (copy) id /* block */ tracker;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)creationDateSortDescriptorAscending:(bool)arg1;
+ (id)endDateSortDescriptorAscending:(bool)arg1;
+ (id)executableQueryForQuery:(id)arg1;
+ (id)localCreationDateSortDescriptorAscending:(bool)arg1;
+ (id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2;
+ (id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsExcludingIntegerValue:(long long)arg1;
+ (id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithBundleID:(id)arg1;
+ (id)predicateForEventsWithCategoryValue:(id)arg1;
+ (id)predicateForEventsWithCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2;
+ (id)predicateForEventsWithCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1;
+ (id)predicateForEventsWithDoubleValue:(double)arg1;
+ (id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2;
+ (id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithIdentifierValue:(id)arg1;
+ (id)predicateForEventsWithIntegerValue:(long long)arg1;
+ (id)predicateForEventsWithLocalCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2;
+ (id)predicateForEventsWithLocalCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithMinimumDuration:(double)arg1;
+ (id)predicateForEventsWithMinumumDuration:(double)arg1;
+ (id)predicateForEventsWithNoSource;
+ (id)predicateForEventsWithNullSourceDeviceID;
+ (id)predicateForEventsWithQuantityValue:(id)arg1;
+ (id)predicateForEventsWithSourceDeviceIDs:(id)arg1;
+ (id)predicateForEventsWithSourceGroupIDs:(id)arg1;
+ (id)predicateForEventsWithSourceID:(id)arg1;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 groupIDs:(id)arg3;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 itemIDs:(id)arg3;
+ (id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartDateAfter:(id)arg1;
+ (id)predicateForEventsWithStartDateOrCreationDateBefore:(id)arg1;
+ (id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartInDateRangeFromAfter:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStreamName:(id)arg1;
+ (id)predicateForEventsWithStreamNames:(id)arg1;
+ (id)predicateForEventsWithStringValue:(id)arg1;
+ (id)predicateForEventsWithStringValueInValues:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValue:(double)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValueBetween:(double)arg2 andValue:(double)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andIntegerValue:(long long)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andStringValue:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andValue:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 inValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 likeStringValue:(id)arg2;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)queryNotExecutableError;
+ (id)startDateSortDescriptorAscending:(bool)arg1;
+ (id)structuredMetadataKeyPathForMetadataKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)executeConcurrently;
- (id)initWithCoder:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setExecuteConcurrently:(bool)arg1;
- (void)setTracker:(id /* block */)arg1;
- (id /* block */)tracker;

// Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore

+ (id)_eventSourceIDForDuetEvent:(id)arg1;
+ (id)_metaPredicatesForDeliveryDuetEvent:(id)arg1;
+ (id)_valuePredicateForDeliveryDuetEvent:(id)arg1;
+ (id)predicateForTPSContextDuetEvent:(id)arg1;
+ (id)tps_predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)tps_predicateForObjectsWithMetadataKey:(id)arg1 andIntegerValue:(long long)arg2;
+ (id)tps_predicateForObjectsWithMetadataKey:(id)arg1 andStringValue:(id)arg2;
+ (id)tps_subQueryFormatStringForValueType:(id)arg1;

@end
