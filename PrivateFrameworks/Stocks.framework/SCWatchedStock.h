
@interface SCWatchedStock : NSObject <NSCopying> {
    NSString * _displaySymbol;
    NSString * _exchange;
    NSString * _name;
    NSString * _shortName;
    NSString * _symbol;
}

@property (nonatomic, readonly, copy) NSString *displaySymbol;
@property (nonatomic, readonly, copy) NSString *exchange;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *shortName;
@property (nonatomic, readonly, copy) NSString *symbol;

+ (id)watchedStockWithSymbol:(id)arg1 name:(id)arg2 exchange:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displaySymbol;
- (id)exchange;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4;
- (id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4 displaySymbol:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)shortName;
- (id)symbol;

@end
