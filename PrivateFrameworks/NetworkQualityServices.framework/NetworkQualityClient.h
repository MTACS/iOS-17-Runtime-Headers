
@interface NetworkQualityClient : NSObject

+ (void)findLocalMeasurementEndpoints:(id /* block */)arg1;
+ (id)getXpcConn;
+ (void)performMeasurementWithConfiguration:(id)arg1 reply:(id /* block */)arg2;

@end
