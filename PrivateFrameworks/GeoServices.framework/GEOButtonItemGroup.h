
@interface GEOButtonItemGroup : GEOButtonItem {
    GEOPDGroupParams * _params;
}

@property (nonatomic, readonly) unsigned long long actionDataIndex;
@property (nonatomic, readonly) NSArray *buttonItems;
@property (nonatomic, readonly) int groupType;

- (void).cxx_destruct;
- (unsigned long long)actionDataIndex;
- (id)buttonItems;
- (int)buttonType;
- (id)debugDescription;
- (id)description;
- (int)groupType;
- (id)initWithGroupParams:(id)arg1;

@end
