
@interface MOApplicationCategoryShieldPolicy : MOCategoryShieldPolicy <MOPersistable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id persistableValue;
@property (readonly) Class superclass;

+ (id)initializeWithPersistableValue:(id)arg1;
+ (bool)isValidPersistableRepresentation:(id)arg1;

- (id)persistableValue;

@end
