
@interface SMAssetBundle : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  assetBundle;
}

@property (nonatomic, readonly) NSString *downloadingDeviceIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long loadStatus;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSString *workoutIdentifier;

- (void).cxx_destruct;
- (id)downloadingDeviceIdentifier;
- (id)identifier;
- (id)init;
- (long long)loadStatus;
- (long long)reason;
- (id)workoutIdentifier;

@end
