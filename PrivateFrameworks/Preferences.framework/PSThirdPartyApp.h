
@interface PSThirdPartyApp : NSObject {
    NSString * _localizedName;
    LSApplicationProxy * _proxy;
}

@property (nonatomic, readonly) LSApplicationProxy *proxy;

- (void).cxx_destruct;
- (id)description;
- (id)initWithApplicationProxy:(id)arg1;
- (void)load;
- (id)localizedName;
- (id)proxy;

@end
