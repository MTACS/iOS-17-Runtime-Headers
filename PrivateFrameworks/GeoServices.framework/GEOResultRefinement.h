
@interface GEOResultRefinement : NSObject {
    GEOResultRefinementMultiSelect * _multiSelect;
    GEOResultRefinementSort * _sort;
    GEOResultRefinementToggle * _toggle;
    long long  _type;
}

@property (nonatomic, retain) GEOResultRefinementMultiSelect *multiSelect;
@property (nonatomic, retain) GEOResultRefinementSort *sort;
@property (nonatomic, retain) GEOResultRefinementToggle *toggle;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinement;
- (id)initWithMultiSelect:(id)arg1;
- (id)initWithResultRefinement:(id)arg1;
- (id)initWithSort:(id)arg1;
- (id)initWithToggle:(id)arg1;
- (id)multiSelect;
- (void)setMultiSelect:(id)arg1;
- (void)setSort:(id)arg1;
- (void)setToggle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)sort;
- (id)toggle;
- (long long)type;

@end
