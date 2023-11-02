
@protocol HDOntologyMercuryZipTSVLineImporter <NSObject>

@required

+ (bool)importLineWithScanner:(HDOntologyTSVScanner *)arg1 slot:(long long)arg2 graphDatabase:(HDSimpleGraphDatabase *)arg3 context:(struct { long long x1; long long x2; unsigned long long x3; bool x4; }*)arg4 error:(id*)arg5;
+ (bool)isHeaderLine:(NSString *)arg1;

@end
