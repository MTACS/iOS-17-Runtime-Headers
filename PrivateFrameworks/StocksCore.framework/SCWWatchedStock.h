
@interface SCWWatchedStock : NSObject <NSCopying> {
    NSString * _compactName;
    NSString * _exchange;
    NSString * _name;
    NSString * _shortName;
    NSString * _symbol;
}

@property (nonatomic, readonly, copy) NSString *compactName;
@property (nonatomic, readonly, copy) NSString *exchange;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *shortName;
@property (nonatomic, readonly, copy) NSString *symbol;

+ (id)watchedStockWithSymbol:(id)arg1 name:(id)arg2 exchange:(id)arg3;

- (void).cxx_destruct;
- (id)compactName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)exchange;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 shortName:(id)arg2 compactName:(id)arg3 symbol:(id)arg4 exchange:(id)arg5;
- (id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)shortName;
- (id)symbol;

@end
