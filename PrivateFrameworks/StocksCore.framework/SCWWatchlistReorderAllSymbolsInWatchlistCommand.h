
@interface SCWWatchlistReorderAllSymbolsInWatchlistCommand : NSObject <SCWZoneCommand> {
    NSOrderedSet * _symbols;
    NSString * _watchlistIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSOrderedSet *symbols;
@property (nonatomic, readonly, copy) NSString *watchlistIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbols:(id)arg1 watchlistIdentifier:(id)arg2;
- (id)symbols;
- (id)watchlistIdentifier;

@end
