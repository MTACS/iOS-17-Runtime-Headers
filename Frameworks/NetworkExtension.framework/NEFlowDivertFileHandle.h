
@interface NEFlowDivertFileHandle : NEFileHandle {
    NSNumber * _controlUnit;
    NSData * _keyMaterial;
}

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (void).cxx_destruct;
- (id)controlUnit;
- (id)description;
- (id)dictionary;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(bool)arg1;
- (id)initFlowDivertControlSocketWithParams:(bool)arg1 order:(int)arg2;
- (id)initFlowDivertDataSocket;
- (id)initFromDictionary:(id)arg1;
- (id)keyMaterial;
- (unsigned long long)type;

@end
