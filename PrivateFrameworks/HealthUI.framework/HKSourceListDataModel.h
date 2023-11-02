
@interface HKSourceListDataModel : NSObject {
    NSSet * _allSources;
    NSArray * _orderedAppSources;
    NSArray * _orderedClinicalSources;
    NSArray * _orderedDeviceSources;
    NSArray * _orderedResearchStudySources;
    NSArray * _orderedUninstalledAppSources;
}

@property (nonatomic, readonly, copy) NSSet *allSources;
@property (nonatomic, readonly, copy) NSArray *orderedAppSources;
@property (nonatomic, readonly, copy) NSArray *orderedClinicalSources;
@property (nonatomic, readonly, copy) NSArray *orderedDeviceSources;
@property (nonatomic, readonly, copy) NSArray *orderedResearchStudySources;
@property (nonatomic, readonly, copy) NSArray *orderedUninstalledAppSources;

- (void).cxx_destruct;
- (void)_sortSources:(id)arg1;
- (id)allSources;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSourceModels:(id)arg1;
- (id)initWithSources:(id)arg1;
- (id)orderedAppSources;
- (id)orderedClinicalSources;
- (id)orderedDeviceSources;
- (id)orderedResearchStudySources;
- (id)orderedUninstalledAppSources;

@end
