
@protocol LSMIResultRegistrantDatabaseContext <NSObject>

@required

- (LSApplicationRecord *)findContainerizedRecordForBundleUnit:(unsigned int)arg1 error:(id*)arg2;
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(FSNode *)arg1 installDictionary:(NSDictionary *)arg2 personasWithAttributes:(NSSet *)arg3 error:(id*)arg4;
- (bool)fullBundleExistsForIdentifier:(NSString *)arg1 matchingNode:(FSNode *)arg2;
- (id /* block */)unregisterApplicationWithBundleIdentifier:(void *)arg1 type:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 8: id /* block */, id, void*, id, SEL, NSString *, unsigned int, id*

@end
