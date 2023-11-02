
@interface ICASSmartFolderCreationData : NSObject <AADataEventType> {
    NSNumber * _countOfTags;
    NSArray * _enabledFiltersArray;
    ICASFilterCondition * _filterCondition;
    ICASFolderCreationApproach * _folderCreationApproach;
}

@property (nonatomic, readonly) NSNumber *countOfTags;
@property (nonatomic, readonly) NSArray *enabledFiltersArray;
@property (nonatomic, readonly) ICASFilterCondition *filterCondition;
@property (nonatomic, readonly) ICASFolderCreationApproach *folderCreationApproach;

+ (id)dataName;

- (void).cxx_destruct;
- (id)countOfTags;
- (id)enabledFiltersArray;
- (id)filterCondition;
- (id)folderCreationApproach;
- (id)initWithFolderCreationApproach:(id)arg1 countOfTags:(id)arg2 filterCondition:(id)arg3 enabledFiltersArray:(id)arg4;
- (id)toDict;

@end
