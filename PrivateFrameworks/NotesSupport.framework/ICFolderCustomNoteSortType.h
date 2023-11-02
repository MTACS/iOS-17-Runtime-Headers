
@interface ICFolderCustomNoteSortType : NSObject {
    long long  _direction;
    long long  _order;
}

@property (nonatomic) long long direction;
@property (nonatomic, readonly) bool isDefault;
@property (nonatomic) long long order;
@property (nonatomic, readonly) long long resolvedCustomSortTypeOrder;
@property (nonatomic, readonly) NSString *summaryViewTitleDescription;
@property (nonatomic, readonly) NSNumber *valueRepresentation;

+ (id)actionItemTitleForOrder:(long long)arg1;
+ (id)currentDefaultMenuItemString;
+ (long long)customOrderForCurrentNoteListSortType;
+ (long long)customOrderForGlobalSortType:(long long)arg1;
+ (id)folderNoteSortTypeFromValue:(id)arg1;
+ (id)folderNoteSortTypeWithOrder:(long long)arg1 direction:(long long)arg2;
+ (bool)isTagADirection:(long long)arg1;
+ (bool)isTagAnOrder:(long long)arg1;
+ (id)noteSortTypeDefaultAscending;
+ (id)querySortType;
+ (id)segmentItemTitleForOrder:(long long)arg1;
+ (void)setQuerySortType:(id)arg1;
+ (long long)sortTypeDirectionForTag:(unsigned long long)arg1;
+ (long long)sortTypeOrderForTag:(unsigned long long)arg1;
+ (id)sortTypeOrderValues;
+ (id)stringNameForDirection:(long long)arg1 order:(long long)arg2;
+ (unsigned long long)tagForSortTypeDirection:(long long)arg1;
+ (unsigned long long)tagForSortTypeOrder:(long long)arg1;

- (id)currentActionItemTitle;
- (id)debugStringNameForOrder:(long long)arg1;
- (id)description;
- (long long)direction;
- (id)folderNoteSortTypeByChangingDirection;
- (id)folderNoteSortTypeByChangingOrder:(long long)arg1;
- (bool)isAscending;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (long long)order;
- (long long)resolvedCustomSortTypeOrder;
- (void)setDirection:(long long)arg1;
- (void)setOrder:(long long)arg1;
- (id)summaryViewTitleDescription;
- (id)valueRepresentation;

@end
