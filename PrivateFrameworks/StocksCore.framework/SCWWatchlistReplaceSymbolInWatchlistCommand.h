
@interface SCWWatchlistReplaceSymbolInWatchlistCommand : NSObject <SCWZoneCommand> {
    NSString * _oldSymbol;
    NSString * _replacementSymbol;
    NSString * _watchlistIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *oldSymbol;
@property (nonatomic, readonly, copy) NSString *replacementSymbol;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *watchlistIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2 watchlistIdentifier:(id)arg3;
- (id)oldSymbol;
- (id)replacementSymbol;
- (id)watchlistIdentifier;

@end
