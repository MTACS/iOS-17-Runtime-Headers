
@protocol _PASSqliteErrorHandlerProtocol <NSObject>

@required

- (bool)handleSqliteError:(void *)arg1 error:(void *)arg2 onError:(void *)arg3 db:(void *)arg4; // needs 4 arg types, found 9: int, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, struct _PASDBIterAction_ { bool x1; }, id /* block */, NSError *, void*, _PASSqliteDatabase *

@end
