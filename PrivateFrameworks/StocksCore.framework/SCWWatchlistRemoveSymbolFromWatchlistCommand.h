
@interface SCWWatchlistRemoveSymbolFromWatchlistCommand : NSObject <SCWZoneCommand> {
    NSString * _symbol;
    NSString * _watchlistIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symbol;
@property (nonatomic, readonly, copy) NSString *watchlistIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1 watchlistIdentifier:(id)arg2;
- (id)symbol;
- (id)watchlistIdentifier;

@end
