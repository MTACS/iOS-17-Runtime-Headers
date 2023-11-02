
@interface WFTableTemplateParameterState : NSObject <WFParameterState> {
    long long  _compoundType;
    bool  _requiresBoundedDate;
    NSArray * _rows;
}

@property (nonatomic, readonly) long long compoundType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *rows;
@property (readonly) Class superclass;

+ (Class)processingValueClass;

- (void).cxx_destruct;
- (id)actualCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)compoundType;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithCompoundType:(long long)arg1 rows:(id)arg2;
- (id)initWithCompoundType:(long long)arg1 rows:(id)arg2 requiresBoundedDate:(bool)arg3;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 contentItemClass:(Class)arg4;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 contentItemClass:(Class)arg4 linkValueTypes:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)rows;
- (id)serializedRepresentation;
- (id)stateByAddingRow:(id)arg1;
- (id)stateByInsertingRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)stateByRemovingRowAtIndex:(unsigned long long)arg1;
- (id)stateByReplacingRowAtIndex:(unsigned long long)arg1 withState:(id)arg2;
- (id)stateBySettingCompoundType:(long long)arg1;

@end
