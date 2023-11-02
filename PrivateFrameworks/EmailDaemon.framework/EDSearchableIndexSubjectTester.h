
@interface EDSearchableIndexSubjectTester : NSObject <EDSearchableIndexTesting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *fetchAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)expressionFromDataSamples:(id)arg1;
- (id)fetchAttributes;
- (id)transformDataForVerification:(id)arg1;
- (bool)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2;

@end
