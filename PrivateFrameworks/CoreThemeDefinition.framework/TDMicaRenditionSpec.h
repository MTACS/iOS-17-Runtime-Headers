
@interface TDMicaRenditionSpec : TDRenditionSpec

@property (nonatomic) bool isTintable;
@property (nonatomic, copy) NSString *layerPath;

- (void)_logError:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)debugDescription;
- (void)setAttributesFromCopyData:(id)arg1;

@end
