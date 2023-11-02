
@interface GDLazyGraphTripleRowCursor : NSObject {
    BOOL  _colMap;
    bool  _done;
    _PASSqliteStatement * _statement;
}

- (void).cxx_destruct;

@end
