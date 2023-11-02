
@interface FIIntervalWorkoutDefinition : NSObject <FIDictionaryRepresentable> {
    NSUUID * _identifier;
    NSString * _name;
    NSArray * _sets;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long intervalCount;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *sets;

+ (id)definitionFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)intervalWorkoutDefinition;

- (void).cxx_destruct;
- (id)byAddingIntervalDefinition:(id)arg1 toSetIndex:(unsigned long long)arg2;
- (id)byAddingSetDefinition:(id)arg1;
- (id)byChangingName:(id)arg1;
- (id)byInsertingIntervalDefinition:(id)arg1 atIndexPath:(id)arg2;
- (id)byInsertingSetDefinition:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)byRemovingIntervalDefinitionAtIndexPath:(id)arg1;
- (id)byRemovingSetDefinitionAtIndex:(unsigned long long)arg1;
- (id)byReplacingIntervalDefinitionAtIndexPath:(id)arg1 withIntervalDefinition:(id)arg2;
- (id)byReplacingSetDefinitionAtIndex:(unsigned long long)arg1 withSetDefinition:(id)arg2;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2 sets:(id)arg3;
- (unsigned long long)intervalCount;
- (id)intervalDefinitionForIntervalAtIndex:(long long)arg1;
- (id)name;
- (id)sets;

@end
