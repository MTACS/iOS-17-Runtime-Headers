
@interface PXSharedLibraryIncludedPeopleDataSource : PXSectionedDataSource {
    NSArray * _allInfos;
    NSArray * _infosWithBothPeopleAndParticipants;
    NSArray * _infosWithoutPeople;
}

@property (nonatomic, readonly) NSArray *allInfos;
@property (nonatomic, readonly) NSArray *allPersonUUIDs;
@property (nonatomic, readonly) NSArray *infosWithBothPeopleAndParticipants;
@property (nonatomic, readonly) NSArray *infosWithoutPeople;

- (void).cxx_destruct;
- (id)allInfos;
- (id)allPersonUUIDs;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)infoAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)infoForParticipant:(id)arg1;
- (id)infoForPersonUUID:(id)arg1;
- (id)infosWithBothPeopleAndParticipants;
- (id)infosWithoutPeople;
- (id)initWithInfos:(id)arg1 infosWithBothPeopleAndParticipants:(id)arg2 infosWithoutPeople:(id)arg3;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
