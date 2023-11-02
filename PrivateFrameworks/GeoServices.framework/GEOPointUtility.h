
@interface GEOPointUtility : NSObject

+ (id)compressedZilchDataFromPoints:(void*)arg1 fromPointIndex:(unsigned long long)arg2 pointCount:(unsigned long long)arg3;
+ (void*)controlPoints:(id)arg1 usesZilch:(bool)arg2;
+ (id)debugDescriptionForCompressedZilchData:(id)arg1;
+ (struct { double x1; double x2; double x3; })pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(bool)arg3;
+ (unsigned long long)pointCount:(id)arg1 usesZilch:(bool)arg2;
+ (id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(bool)arg3;
+ (id)unpackBasicPoints:(id)arg1;
+ (id)unpackPoints:(id)arg1 usesZilch:(bool)arg2;
+ (id)unpackZilchPoints:(id)arg1;

@end
