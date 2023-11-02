
@interface ARHitTestRaycasting : NSObject

+ (id)convertHitTestResult:(void *)arg1 resultType:(void *)arg2 origin:(void *)arg3 referenceOriginTransform:(void *)arg4; // needs 4 arg types, found 3: const struct CV3DHitTestResult { struct __CFUUID {} *x1; double x2[16]; int x3; int x4; int x5; struct __CFUUID {} *x6; }*, unsigned long long, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
+ (unsigned int)fillPointCloud:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 cloudFeatures:(id)arg2 vergenceAngleCosines:(const float*)arg3 cloudWorldPoints:(id)arg4 pointsWorld:(void*)arg5 covariancesWorld:(void*)arg6 wideToJasperTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg7;
+ (id)hitTestFromOrigin:(void *)arg1 resultType:(void *)arg2 origin:(void *)arg3 withDirection:(void *)arg4 referenceOriginTransform:(void *)arg5; // needs 5 arg types, found 3: id, unsigned long long, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }

@end
