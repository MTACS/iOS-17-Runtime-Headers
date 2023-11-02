
@protocol REMCRMergeableDataType <CRDataType, CREquatable, CRCoding>

@required

+ (void)rem_registerClassAtCRCoderIfNeeded;

@end
