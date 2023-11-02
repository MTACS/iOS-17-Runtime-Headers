
@interface SCWWatchlist : NSObject <NSCopying> {
    NSNumber * _displayState;
    NSString * _identifier;
    NSString * _name;
    NSNumber * _sortOrderState;
    NSNumber * _sortState;
    NSArray * _symbols;
}

@property (nonatomic, readonly, copy) NSNumber *displayState;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSNumber *sortOrderState;
@property (nonatomic, readonly, copy) NSNumber *sortState;
@property (nonatomic, readonly, copy) NSArray *symbols;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayState;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 symbols:(id)arg3 sortState:(id)arg4 sortOrderState:(id)arg5 displayState:(id)arg6;
- (id)name;
- (id)sortOrderState;
- (id)sortState;
- (id)symbols;

@end
