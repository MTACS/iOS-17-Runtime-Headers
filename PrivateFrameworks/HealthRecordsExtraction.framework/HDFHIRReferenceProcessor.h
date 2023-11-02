
@interface HDFHIRReferenceProcessor : NSObject

+ (id)identifierForResource:(id)arg1 containedInResource:(id)arg2 error:(id*)arg3;
+ (id)identifierFromAbsoluteReferenceURL:(id)arg1;
+ (id)newResourceFromResource:(id)arg1 containingOnlyResources:(id)arg2 error:(id*)arg3;
+ (id)newResourceFromResource:(id)arg1 containingResource:(id)arg2 reference:(id)arg3 error:(id*)arg4;
+ (bool)reference:(id)arg1 matchesIdentifier:(id)arg2;
+ (bool)referenceIsAbsolute:(id)arg1;
+ (bool)referenceRequiresContaining:(id)arg1;
+ (id)referencesAtKeyPath:(id)arg1 resourceDictionary:(id)arg2 error:(id*)arg3;
+ (id)resourceContainedInResource:(id)arg1 reference:(id)arg2 error:(id*)arg3;
+ (id)resourceReferenceInReference:(id)arg1 error:(id*)arg2;
+ (id)resourcesContainedInResource:(id)arg1 error:(id*)arg2;

@end
