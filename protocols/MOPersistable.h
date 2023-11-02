
@protocol MOPersistable <NSObject>

@required

+ (id)initializeWithPersistableValue:(id)arg1;
+ (bool)isValidPersistableRepresentation:(id)arg1;

- (id)persistableValue;

@end
