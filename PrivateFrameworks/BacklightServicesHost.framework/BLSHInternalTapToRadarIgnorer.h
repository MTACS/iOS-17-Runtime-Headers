
@interface BLSHInternalTapToRadarIgnorer : NSObject

+ (id)_defaults;
+ (id)_ignoredDesignations;
+ (bool)hasIgnoredDesignations;
+ (void)ignoreRadarDesignation:(unsigned long long)arg1;
+ (void)resetIgnoredDesignations;
+ (bool)shouldIgnoreDesignation:(unsigned long long)arg1;

@end
