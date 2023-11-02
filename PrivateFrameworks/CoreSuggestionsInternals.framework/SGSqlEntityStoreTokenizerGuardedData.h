
@interface SGSqlEntityStoreTokenizerGuardedData : NSObject {
    _PASSqliteDatabase * _db;
    struct sqlite3_tokenizer { struct sqlite3_tokenizer_module {} *x1; } * _tokenizerInstance;
    struct sqlite3_tokenizer_module { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); struct sqlite3 {} *x7; } * _tokenizerModule;
}

- (void).cxx_destruct;

@end
