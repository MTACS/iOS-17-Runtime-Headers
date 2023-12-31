
@interface TUResultGroup : NSObject <NSCopying> {
    NSMutableArray * _resultsCache;
    TUGroupTitle * _title;
}

@property (readonly) unsigned long long groupType;
@property (readonly) NSArray *results;
@property (nonatomic, retain) NSMutableArray *resultsCache;
@property (nonatomic, retain) TUGroupTitle *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)groupType;
- (id)initWithTitle:(id)arg1 results:(id)arg2;
- (void)removeSearchItem:(id)arg1;
- (id)results;
- (id)resultsCache;
- (void)setResultsCache:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
