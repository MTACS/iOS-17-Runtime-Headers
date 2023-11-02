
@interface NSCKMetadataEntry : NSManagedObject

@property (nonatomic) bool boolValue;
@property (nonatomic, retain) NSNumber *boolValueNum;
@property (nonatomic, retain) NSDate *dateValue;
@property (nonatomic, retain) NSNumber *integerValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, retain) NSObject<NSSecureCoding> *transformedValue;

+ (id)entityPath;

- (bool)boolValue;
- (void)setBoolValue:(bool)arg1;

@end
