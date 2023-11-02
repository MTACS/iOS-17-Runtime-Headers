
@interface PXSharedLibraryParticipantDataSource : PXSectionedDataSource {
    NSArray * _participants;
}

@property (nonatomic, readonly) NSSet *emailAddresses;
@property (nonatomic, readonly) NSArray *names;
@property (nonatomic, readonly) NSSet *participantAddresses;
@property (nonatomic, readonly) NSArray *participantImageCombinerItems;
@property (nonatomic, retain) NSArray *participants;
@property (nonatomic, readonly) NSSet *phoneNumbers;

- (void).cxx_destruct;
- (id)_initWithParticipants:(id)arg1;
- (bool)canAddParticipants;
- (id)emailAddresses;
- (id)itemAtIndex:(long long)arg1;
- (id)names;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfParticipants;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)participantAddresses;
- (id)participantImageCombinerItems;
- (id)participants;
- (id)phoneNumbers;
- (void)setParticipants:(id)arg1;

@end
