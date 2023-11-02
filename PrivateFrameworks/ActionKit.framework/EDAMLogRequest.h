
@interface EDAMLogRequest : FATObject {
    EDAMSearchRecord * _searchRecord;
}

@property (nonatomic, retain) EDAMSearchRecord *searchRecord;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)searchRecord;
- (void)setSearchRecord:(id)arg1;

@end
