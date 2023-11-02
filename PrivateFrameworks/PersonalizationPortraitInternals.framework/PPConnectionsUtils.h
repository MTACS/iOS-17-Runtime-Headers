
@interface PPConnectionsUtils : NSObject

+ (id)calendarUserActivityExternalIDKey;
+ (id)calendarUserActivityIdentifier;
+ (bool)isClientAuthorizedForSemanticTriggers:(id)arg1;
+ (bool)isValidLinguisticQuery:(id)arg1;
+ (unsigned char)locationFieldFromSemanticTag:(unsigned char)arg1;
+ (bool)shouldAggregateLabel:(id)arg1 withValue:(id)arg2 query:(id)arg3;
+ (id)supportedLocationSemanticTypes;
+ (id)triggerTypeFromQuery:(id)arg1;

@end
