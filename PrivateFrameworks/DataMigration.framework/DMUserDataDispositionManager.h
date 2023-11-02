
@interface DMUserDataDispositionManager : NSObject

+ (unsigned int)backupSourceDispositionFlagsFromDispositionFlags:(unsigned int)arg1;
+ (unsigned int)basicDispositionFlagsFromDispositionFlags:(unsigned int)arg1;
+ (id)descriptionFromDispositionFlags:(unsigned int)arg1;
+ (unsigned int)dispositionFlagsFromDispositionDict:(id)arg1;

@end
