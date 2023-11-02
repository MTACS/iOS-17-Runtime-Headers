
@protocol MADServiceProtocol

@required

+ (NSSet *)allowedClasses;
+ (NSSet *)allowedVideoRequestClasses;
+ (NSSet *)allowedVideoResultClasses;
+ (Protocol *)serverProtocol;
+ (NSString *)serviceName;

@end
