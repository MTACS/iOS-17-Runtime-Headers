
@interface PPSQLDatabaseHandlePool : NSObject {
    NSMutableArray * availableReadOnlyHandles;
    _PASSqliteDatabase * readWriteHandle;
    unsigned long long  totalReadOnlyHandles;
}

- (void).cxx_destruct;

@end
