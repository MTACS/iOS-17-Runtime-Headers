
@interface TRIPBUninterpretedOption : TRIPBMessage

@property (nonatomic, copy) NSString *aggregateValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasAggregateValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIdentifierValue;
@property (nonatomic) bool hasNegativeIntValue;
@property (nonatomic) bool hasPositiveIntValue;
@property (nonatomic) bool hasStringValue;
@property (nonatomic, copy) NSString *identifierValue;
@property (nonatomic, retain) NSMutableArray *nameArray;
@property (nonatomic, readonly) unsigned long long nameArray_Count;
@property (nonatomic) long long negativeIntValue;
@property (nonatomic) unsigned long long positiveIntValue;
@property (nonatomic, copy) NSData *stringValue;

+ (id)descriptor;

@end
