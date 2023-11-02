
@interface _GEOConfigDBDeleteOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    _GEOConfigDB * _configDB;
    long long  _rowId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init:(id)arg1 rowId:(long long)arg2;
- (bool)performOperation;

@end
