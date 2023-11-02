
@interface SCWatchlistReorderSymbolCommand : NSObject <SCWZoneCommand> {
    NSString * _precedingSymbol;
    NSString * _symbol;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *precedingSymbol;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symbol;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1 precedingSymbol:(id)arg2;
- (id)precedingSymbol;
- (id)symbol;

@end
