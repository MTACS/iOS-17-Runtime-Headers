
@protocol SRSampleExporting <NSObject>

@optional

- (NSDictionary *)sr_dictionaryRepresentation;
- (<NSFastEnumeration> *)sr_exportRepresentationEnumerator;

@end
