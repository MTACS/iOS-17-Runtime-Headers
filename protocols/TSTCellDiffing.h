
@protocol TSTCellDiffing

@required

+ (TSSPropertySet *)cellDiffProperties;

- (id)objectByRemovingPropertiesInMap:(TSSPropertyMap *)arg1 addingPropertiesInMap:(TSSPropertyMap *)arg2 updateInverseResetPropertyMap:(TSSPropertyMap *)arg3 updateInverseSetPropertyMap:(TSSPropertyMap *)arg4;

@optional

- (id)objectByRemovingPropertiesInMap:(TSSPropertyMap *)arg1 addingPropertiesInMap:(TSSPropertyMap *)arg2 updateInverseResetPropertyMap:(TSSPropertyMap *)arg3 updateInverseSetPropertyMap:(TSSPropertyMap *)arg4 optionalConcurrentStylesheet:(TSTConcurrentStylesheet *)arg5;

@end
