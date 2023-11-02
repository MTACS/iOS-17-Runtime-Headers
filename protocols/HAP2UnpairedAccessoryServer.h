
@protocol HAP2UnpairedAccessoryServer <HAP2AccessoryServer>

@required

- (<HAP2Cancelable> *)identifyWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<HAP2Cancelable> *)pairWithDelegate:(id <HAP2UnpairedAccessoryServerPairDelegate>)arg1;
- (NSString *)setupID;

@end
