
@interface SCWatchlistAddDefaultSymbolsCommand : NSObject <SCWZoneCommand> {
    bool  _deferUpload;
    NSArray * _symbols;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deferUpload;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *symbols;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)deferUpload;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbols:(id)arg1 deferUpload:(bool)arg2;
- (bool)shouldDeferUpload;
- (id)symbols;

@end
