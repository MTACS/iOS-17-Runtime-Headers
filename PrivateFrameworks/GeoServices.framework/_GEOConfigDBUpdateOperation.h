
@interface _GEOConfigDBUpdateOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    _GEOConfigDB * _configDB;
    long long  _rowId;
    NSString * _type;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 value:(id)arg4;
- (bool)performOperation;

@end
