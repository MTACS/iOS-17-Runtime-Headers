
@interface EFSQLPropertyMapper : NSObject {
    NSMutableDictionary * _lookupValues;
}

@property (nonatomic, retain) NSMutableDictionary *lookupValues;

+ (id)emptyPropertyMapper;

- (void).cxx_destruct;
- (id)_findAllProtocolsOfClass:(Class)arg1 withProperty:(SEL)arg2;
- (id)_qualifiedColumnExpressionsForColumn:(id)arg1 availableTables:(id)arg2 replaceNULL:(bool)arg3;
- (void)_registerQualifiedColumns:(id)arg1 lookupKeys:(id)arg2 forClass:(Class)arg3 property:(SEL)arg4;
- (id)columnForClass:(Class)arg1 property:(SEL)arg2;
- (id)columnForLookupKey:(id)arg1 value:(id)arg2;
- (id)columnForProtocol:(id)arg1 property:(SEL)arg2;
- (id)columnNameForClass:(Class)arg1 property:(SEL)arg2;
- (id)columnNameForLookupKey:(id)arg1 value:(id)arg2;
- (id)columnNameForProtocol:(id)arg1 property:(SEL)arg2;
- (bool)hasLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3;
- (id)init;
- (id)lookupValues;
- (id)merge:(id)arg1;
- (id)qualifiedColumnExpressionForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3;
- (id)qualifiedColumnExpressionForLookupKey:(id)arg1 value:(id)arg2 availableTables:(id)arg3;
- (id)qualifiedColumnExpressionsForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3;
- (id)qualifiedColumnNamesForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3;
- (void)registerColumn:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 lookupKeys:(id)arg4;
- (void)registerColumn:(id)arg1 forProtocol:(id)arg2 property:(SEL)arg3 lookupKeys:(id)arg4;
- (void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3;
- (void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 forClass:(Class)arg4 property:(SEL)arg5;
- (void)registerColumnNames:(id)arg1 table:(id)arg2 forClass:(Class)arg3 property:(SEL)arg4;
- (void)setLookupValues:(id)arg1;
- (id)valueForLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3;
- (id)valueForLookupKey:(id)arg1 protocol:(id)arg2 property:(SEL)arg3;

@end
