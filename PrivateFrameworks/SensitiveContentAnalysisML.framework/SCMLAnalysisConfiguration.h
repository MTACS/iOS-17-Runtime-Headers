
@interface SCMLAnalysisConfiguration : NSObject {
    long long  _deviceType;
}

@property (nonatomic, readonly) long long deviceType;

- (long long)deviceType;
- (id)init;
- (id)initWithOptions:(id)arg1;

@end
