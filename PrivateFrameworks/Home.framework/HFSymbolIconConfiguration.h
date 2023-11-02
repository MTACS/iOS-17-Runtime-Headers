
@interface HFSymbolIconConfiguration : NSObject {
    UIImageSymbolConfiguration * _configuration;
    NSString * _systemImageName;
}

@property (nonatomic, readonly) UIImageSymbolConfiguration *configuration;
@property (nonatomic, readonly) NSString *systemImageName;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithSystemImageName:(id)arg1;
- (id)initWithSystemImageName:(id)arg1 configuration:(id)arg2;
- (id)systemImageName;

@end
