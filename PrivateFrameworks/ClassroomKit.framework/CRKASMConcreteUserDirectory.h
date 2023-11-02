
@interface CRKASMConcreteUserDirectory : NSObject <CRKASMUserDirectory> {
    id /* block */  _queryGenerator;
    <CRKClassKitRosterRequirements> * _requirements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ queryGenerator;
@property (nonatomic, readonly) <CRKClassKitRosterRequirements> *requirements;
@property (readonly) Class superclass;

+ (id)instructorDirectoryWithRosterRequirements:(id)arg1 locationIDs:(id)arg2;
+ (id)studentDirectoryWithRosterRequirements:(id)arg1 locationIDs:(id)arg2;

- (void).cxx_destruct;
- (id)initWithRosterRequirements:(id)arg1 queryGenerator:(id /* block */)arg2;
- (id)iteratorForSearchString:(id)arg1 sortingGivenNameFirst:(bool)arg2 pageSize:(long long)arg3;
- (id /* block */)queryGenerator;
- (id)requirements;

@end
