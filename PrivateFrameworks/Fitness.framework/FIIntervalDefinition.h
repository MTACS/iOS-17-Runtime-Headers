
@interface FIIntervalDefinition : NSObject <FIDictionaryRepresentable> {
    HKQuantity * _quantity;
    long long  _type;
}

@property (nonatomic, readonly) HKQuantity *quantity;
@property (nonatomic, readonly) long long type;

+ (id)definitionFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)intervalDefinitionWithTypeIdentifier:(long long)arg1 quantity:(id)arg2;

- (void).cxx_destruct;
- (id)byChangingType:(long long)arg1 quantity:(id)arg2;
- (id)dictionaryRepresentation;
- (id)initWithTypeIdentifier:(long long)arg1 quantity:(id)arg2;
- (id)quantity;
- (long long)type;

@end
