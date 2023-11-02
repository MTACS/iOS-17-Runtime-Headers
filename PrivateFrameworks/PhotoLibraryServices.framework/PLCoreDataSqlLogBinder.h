
@interface PLCoreDataSqlLogBinder : NSObject {
    NSRegularExpression * _bindRegex;
    NSMutableArray * _bindValues;
    NSRegularExpression * _selectRegex;
    NSString * _selectString;
}

@property (readonly, copy) NSString *boundSql;

- (void).cxx_destruct;
- (void)addLogLine:(id)arg1;
- (id)boundSql;
- (id)init;

@end
