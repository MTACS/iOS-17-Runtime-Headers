
@interface REScriptSymbolTable : NSObject {
    NSMutableDictionary * _definitions;
    REScriptSymbolTable * _parentTable;
}

- (void).cxx_destruct;
- (void)_enumerateObjectsOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)define:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4;
- (void)enumerateFeatures:(id /* block */)arg1;
- (void)enumerateRules:(id /* block */)arg1;
- (id)initWithParentScope:(id)arg1;
- (id)nodeValueForDefinition:(id)arg1;
- (id)objectValueForDefinition:(id)arg1;
- (bool)setNodeValue:(id)arg1 forDefinition:(id)arg2 error:(id*)arg3;
- (bool)setObjectValue:(id)arg1 forDefinition:(id)arg2 error:(id*)arg3;
- (bool)typeForDefinition:(id)arg1 type:(unsigned long long*)arg2;

@end
