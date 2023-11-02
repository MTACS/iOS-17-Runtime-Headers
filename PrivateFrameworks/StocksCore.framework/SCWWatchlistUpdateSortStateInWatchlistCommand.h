
@interface SCWWatchlistUpdateSortStateInWatchlistCommand : NSObject <SCWZoneCommand> {
    NSNumber * _sortOrderState;
    NSNumber * _sortState;
    NSString * _watchlistIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *sortOrderState;
@property (nonatomic, readonly, copy) NSNumber *sortState;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *watchlistIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWatchlistIdentifier:(id)arg1 sortState:(id)arg2 sortOrderState:(id)arg3;
- (id)sortOrderState;
- (id)sortState;
- (id)watchlistIdentifier;

@end
