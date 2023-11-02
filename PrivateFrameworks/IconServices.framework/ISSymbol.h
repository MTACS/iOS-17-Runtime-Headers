
@interface ISSymbol : IFSymbol

+ (id)_generateVariantKeyFromOptions:(unsigned long long)arg1;
+ (id)symbolForType:(id)arg1;
+ (id)symbolForTypeIdentifier:(id)arg1 error:(id*)arg2;
+ (id)symbolForTypeIdentifier:(id)arg1 withResolutionStrategy:(long long)arg2 variantOptions:(unsigned long long)arg3 error:(id*)arg4;
+ (id)symbolForURL:(id)arg1;

@end
