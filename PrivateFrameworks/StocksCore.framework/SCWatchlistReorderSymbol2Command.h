
@interface SCWatchlistReorderSymbol2Command : NSObject <SCWZoneCommand> {
    NSString * _symbol;
    unsigned long long  _toIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symbol;
@property (nonatomic, readonly) unsigned long long toIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)symbol;
- (unsigned long long)toIndex;

@end
