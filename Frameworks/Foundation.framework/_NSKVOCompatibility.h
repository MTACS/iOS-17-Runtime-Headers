
@interface _NSKVOCompatibility : NSObject <_NSKVOCompatibilityShim>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_noteProcessHasUsedKVOSwiftOverlay;
+ (bool)_releasesObservationBlockOnInvalidation;
+ (void)_setRequiresSilencingExceptions:(bool)arg1;

@end
