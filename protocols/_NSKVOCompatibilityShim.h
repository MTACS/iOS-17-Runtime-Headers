
@protocol _NSKVOCompatibilityShim <NSObject>

@required

+ (void)_noteProcessHasUsedKVOSwiftOverlay;
+ (bool)_releasesObservationBlockOnInvalidation;

@end
