
@interface ASTNetworkReachability : NSObject

+ (id)defaultPath;
+ (bool)hasExpensiveCellOnlyNetworkConnection;
+ (bool)hasNetworkConnection;

@end
