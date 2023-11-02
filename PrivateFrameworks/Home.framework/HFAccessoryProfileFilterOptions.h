
@interface HFAccessoryProfileFilterOptions : NSObject {
    NSSet * _byAccessories;
    NSSet * _byCategoryTypes;
    NSSet * _byClasses;
    bool  _byFavorites;
    id /* block */  _byFilter;
    NSSet * _byManufacturers;
    NSSet * _byModels;
    NSSet * _byRooms;
}

@property (nonatomic, copy) NSSet *byAccessories;
@property (nonatomic, copy) NSSet *byCategoryTypes;
@property (nonatomic, copy) NSSet *byClasses;
@property (nonatomic) bool byFavorites;
@property (nonatomic, copy) id /* block */ byFilter;
@property (nonatomic, copy) NSSet *byManufacturers;
@property (nonatomic, copy) NSSet *byModels;
@property (nonatomic, copy) NSSet *byRooms;

- (void).cxx_destruct;
- (id)byAccessories;
- (id)byCategoryTypes;
- (id)byClasses;
- (bool)byFavorites;
- (id /* block */)byFilter;
- (id)byManufacturers;
- (id)byModels;
- (id)byRooms;
- (void)setByAccessories:(id)arg1;
- (void)setByCategoryTypes:(id)arg1;
- (void)setByClasses:(id)arg1;
- (void)setByFavorites:(bool)arg1;
- (void)setByFilter:(id /* block */)arg1;
- (void)setByManufacturers:(id)arg1;
- (void)setByModels:(id)arg1;
- (void)setByRooms:(id)arg1;

@end
