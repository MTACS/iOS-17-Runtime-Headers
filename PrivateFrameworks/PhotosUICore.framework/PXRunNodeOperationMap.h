
@interface PXRunNodeOperationMap : NSObject {
    NSMapTable * _operationMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)operationForRunNode:(id)arg1;

@end
