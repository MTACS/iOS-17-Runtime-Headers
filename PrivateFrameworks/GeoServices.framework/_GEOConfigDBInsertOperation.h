
@interface _GEOConfigDBInsertOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    _GEOConfigDB * _configDB;
    NSString * _key;
    long long  _parentId;
    long long  _rowId;
    NSString * _type;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 key:(id)arg4 value:(id)arg5 parentId:(long long)arg6;
- (bool)performOperation;

@end
