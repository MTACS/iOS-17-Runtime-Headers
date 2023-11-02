
@interface HFCategoryAccessoryType : HFAccessoryType {
    NSString * _categoryType;
}

@property (nonatomic, readonly) NSString *categoryType;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)categoryType;
- (id)debugDescription;
- (id)description;
- (id)initWithCategoryType:(id)arg1;
- (id)localizedCategory;

@end
