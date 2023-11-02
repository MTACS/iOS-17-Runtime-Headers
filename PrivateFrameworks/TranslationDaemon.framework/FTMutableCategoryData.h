
@interface FTMutableCategoryData : FTCategoryData

@property (nonatomic, copy) NSArray *category_data;
@property (nonatomic, copy) NSString *category_name;

- (id)category_data;
- (id)category_name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setCategory_data:(id)arg1;
- (void)setCategory_name:(id)arg1;

@end
