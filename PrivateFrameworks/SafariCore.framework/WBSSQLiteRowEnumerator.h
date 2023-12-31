
@interface WBSSQLiteRowEnumerator : NSEnumerator {
    int  _lastResultCode;
    WBSSQLiteRow * _row;
    WBSSQLiteStatement * _statement;
}

@property (nonatomic, readonly) int lastResultCode;
@property (nonatomic, readonly) WBSSQLiteStatement *statement;

- (void).cxx_destruct;
- (id)initWithResultsOfStatement:(id)arg1;
- (int)lastResultCode;
- (id)nextObject;
- (id)statement;

@end
