
@protocol BDSSyncEngineSaltManagerObserver <NSObject>

@required

- (void)saltManager:(BDSSyncEngineSaltManager *)arg1 updatedSaltWithVersion:(NSString *)arg2;

@end
