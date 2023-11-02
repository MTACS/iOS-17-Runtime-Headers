
@interface SCWWatchlistAddNewWatchlistCommand : NSObject <SCWZoneCommand> {
    NSNumber * _displayState;
    NSString * _name;
    NSNumber * _sortOrderState;
    NSNumber * _sortState;
    NSArray * _symbols;
    NSString * _watchlistIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *displayState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSNumber *sortOrderState;
@property (nonatomic, readonly, copy) NSNumber *sortState;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *symbols;
@property (nonatomic, readonly, copy) NSString *watchlistIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayState;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 sortState:(id)arg3 sortOrderState:(id)arg4 displayState:(id)arg5;
- (id)initWithName:(id)arg1 identifier:(id)arg2 symbols:(id)arg3 sortState:(id)arg4 sortOrderState:(id)arg5 displayState:(id)arg6;
- (id)name;
- (id)sortOrderState;
- (id)sortState;
- (id)symbols;
- (id)watchlistIdentifier;

@end
