
@interface HDOntologyMercuryZipTSVNodeLineImporter : NSObject <HDOntologyMercuryZipTSVLineImporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)importLineWithScanner:(id)arg1 slot:(long long)arg2 graphDatabase:(id)arg3 context:(struct { long long x1; long long x2; unsigned long long x3; bool x4; }*)arg4 error:(id*)arg5;
+ (bool)isHeaderLine:(id)arg1;

@end
