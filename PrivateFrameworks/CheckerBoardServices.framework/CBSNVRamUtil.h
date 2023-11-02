
@interface CBSNVRamUtil : NSObject

+ (void)clearNVRamVariable:(id)arg1;
+ (bool)readNVRamVariable:(id)arg1 value:(id*)arg2;
+ (void)writeNVRamVariable:(id)arg1 value:(id)arg2;

@end
