
@interface GEOResultRefinementSort : NSObject {
    NSNumber * _defaultSelectedElementIndex;
    NSString * _displayName;
    NSNumber * _selectedElementIndex;
    NSArray * _sorts;
}

@property (nonatomic, retain) NSNumber *defaultSelectedElementIndex;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSNumber *selectedElementIndex;
@property (nonatomic, copy) NSArray *sorts;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementSort;
- (id)defaultSelectedElementIndex;
- (id)displayName;
- (id)initWithDisplayName:(id)arg1 sorts:(id)arg2 selectedElementIndex:(id)arg3 defaultSelectedElementIndex:(id)arg4;
- (id)initWithResultRefinementSort:(id)arg1;
- (id)selectedElementIndex;
- (void)setDefaultSelectedElementIndex:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSelectedElementIndex:(id)arg1;
- (void)setSorts:(id)arg1;
- (id)sorts;

@end
