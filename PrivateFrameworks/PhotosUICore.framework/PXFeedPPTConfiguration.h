
@interface PXFeedPPTConfiguration : NSObject {
    PXFeedConfiguration * _feedConfiguration;
    NSString * _name;
}

@property (nonatomic, readonly) PXFeedConfiguration *feedConfiguration;
@property (nonatomic, readonly) NSString *name;

+ (id)configurationsForPreset:(unsigned long long)arg1 testOptions:(id)arg2;

- (void).cxx_destruct;
- (id)feedConfiguration;
- (id)init;
- (id)initWithName:(id)arg1 feedConfiguration:(id)arg2;
- (id)initWithPreset:(unsigned long long)arg1;
- (id)name;

@end
