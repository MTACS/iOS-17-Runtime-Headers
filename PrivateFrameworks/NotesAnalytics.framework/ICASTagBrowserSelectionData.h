
@interface ICASTagBrowserSelectionData : NSObject <AADataEventType> {
    NSNumber * _countOfSelectedTags;
    NSNumber * _isAllTagsSelected;
}

@property (nonatomic, readonly) NSNumber *countOfSelectedTags;
@property (nonatomic, readonly) NSNumber *isAllTagsSelected;

+ (id)dataName;

- (void).cxx_destruct;
- (id)countOfSelectedTags;
- (id)initWithCountOfSelectedTags:(id)arg1 isAllTagsSelected:(id)arg2;
- (id)isAllTagsSelected;
- (id)toDict;

@end
