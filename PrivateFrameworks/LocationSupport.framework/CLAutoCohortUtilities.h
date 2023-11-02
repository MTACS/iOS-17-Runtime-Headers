
@interface CLAutoCohortUtilities : NSObject

+ (void)applyEdges:(id)arg1 toGraph:(id)arg2;
+ (bool)autoCohortingEnabled;
+ (id)computeAutoCohortMapWithStarterGraph:(id)arg1;
+ (void)createDirectoryAtPath:(id)arg1;
+ (void)enableAutoCohortingForProcessAtPath:(id)arg1;
+ (id)getEdgeFilesFromDirectory:(id)arg1;
+ (id)getSafeEdges;
+ (id)getUnsafeEdges;
+ (id)getUnvettedEdges;
+ (bool)isEdgeKnownToCauseCycle:(id)arg1;
+ (id)layerAssignmentForNode:(id)arg1 inGraph:(id)arg2 extendingLayering:(id)arg3;
+ (void)markUnvetted:(id)arg1;
+ (void)markUnvettedSafe;
+ (void)markUnvettedUnsafe;
+ (void)persistEdgeFrom:(id)arg1 to:(id)arg2;
+ (id)readEdges:(id)arg1;
+ (void)writeEdge:(id)arg1 toDirectory:(id)arg2;

@end
