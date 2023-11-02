
@interface SCWatchlistReorderWatchlistCommand : NSObject <SCWZoneCommand> {
    NSString * _precedingWatchlistIdentifier;
    NSString * _watchlistIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *precedingWatchlistIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *watchlistIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWatchlistIdentifier:(id)arg1 precedingWatchlistIdentifier:(id)arg2;
- (id)precedingWatchlistIdentifier;
- (id)watchlistIdentifier;

@end
