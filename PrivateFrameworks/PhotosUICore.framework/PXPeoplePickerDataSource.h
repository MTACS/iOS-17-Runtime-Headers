
@interface PXPeoplePickerDataSource : PXSectionedDataSource {
    PHFetchResult * __fetchResult;
    NSArray * _allSelectedLocalIdentifiers;
    NSArray * _disabledLocalIdentifiers;
    NSOrderedSet * _newlyDeselectedObjectIDs;
    NSOrderedSet * _newlySelectedObjectIDs;
}

@property (nonatomic, readonly) PHFetchResult *_fetchResult;
@property (nonatomic, readonly) NSArray *allSelectedLocalIdentifiers;
@property (nonatomic, readonly) NSArray *disabledLocalIdentifiers;
@property (nonatomic, readonly) NSOrderedSet *newlyDeselectedObjectIDs;
@property (nonatomic, readonly) NSOrderedSet *newlySelectedObjectIDs;

- (void).cxx_destruct;
- (id)_fetchResult;
- (id)allSelectedLocalIdentifiers;
- (id)dataSourceUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2;
- (id)disabledLocalIdentifiers;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithFetchResult:(id)arg1 disabledLocalIdentifiers:(id)arg2 allSelectedLocalIdentifiers:(id)arg3 newlySelectedObjectIDs:(id)arg4 newlyDeselectedObjectIDs:(id)arg5;
- (bool)isItemDisabledAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)newlyDeselectedObjectIDs;
- (id)newlySelectedObjectIDs;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)personAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
