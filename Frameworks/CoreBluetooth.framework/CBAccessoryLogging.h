
@interface CBAccessoryLogging : NSObject

+ (unsigned long long)getComponentIDFromProductID:(unsigned long long)arg1;
+ (unsigned long long)getComponentIDFromRadarReason:(int)arg1;
+ (id)getComponentNameFromProductID:(unsigned long long)arg1;
+ (id)getComponentNameFromRadarReason:(int)arg1;
+ (id)getComponentVersionFromProductID:(unsigned long long)arg1;
+ (id)getComponentVersionFromRadarReason:(int)arg1;
+ (id)getProductNameFromProductID:(unsigned long long)arg1;

@end
