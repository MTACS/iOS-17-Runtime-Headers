
@interface SCWWatchlistAddToWatchlistOrderCommand : NSObject <SCWZoneCommand> {
    NSString * _watchlistIdentifier;
    NSArray * _watchlistIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *watchlistIdentifier;
@property (nonatomic, readonly, copy) NSArray *watchlistIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWatchlistIdentifiers:(id)arg1;
- (id)watchlistIdentifier;
- (id)watchlistIdentifiers;

@end
