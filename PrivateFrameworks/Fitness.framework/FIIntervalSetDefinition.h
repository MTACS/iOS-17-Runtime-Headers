
@interface FIIntervalSetDefinition : NSObject <FIDictionaryRepresentable> {
    NSArray * _intervalDefinitions;
    long long  _repeatCount;
    long long  _setType;
}

@property (nonatomic, readonly) unsigned long long intervalCount;
@property (nonatomic, readonly) NSArray *intervalDefinitions;
@property (nonatomic, readonly) long long repeatCount;
@property (nonatomic, readonly) long long setType;

+ (id)definitionFromDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)byAddingIntervalDefinition:(id)arg1;
- (id)byChangingRepeatCount:(long long)arg1;
- (id)byChangingSetType:(long long)arg1;
- (id)byInsertingIntervalDefinition:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)byRemovingIntervalDefinitionAtIndex:(unsigned long long)arg1;
- (id)byReplacingIntervalDefinitionAtIndex:(unsigned long long)arg1 withIntervalDefinition:(id)arg2;
- (id)dictionaryRepresentation;
- (id)initWithIntervalDefinitions:(id)arg1 repeatCount:(long long)arg2 setType:(long long)arg3;
- (id)intervalAtIndex:(unsigned long long)arg1;
- (unsigned long long)intervalCount;
- (id)intervalDefinitions;
- (long long)repeatCount;
- (long long)setType;

@end
