
@interface MOCategory : NSObject <MOPersistable> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *identifier;
@property (nonatomic, readonly) id persistableValue;
@property (readonly) Class superclass;

+ (id)initializeWithPersistableValue:(id)arg1;
+ (bool)isValidPersistableRepresentation:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persistableValue;

@end
