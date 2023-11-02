
@interface HUBaseIconViewConfiguration : NSObject {
    void configuration;
}

@property (nonatomic) long long appearance;
@property (nonatomic, readonly) long long viewType;

- (void).cxx_destruct;
- (long long)appearance;
- (id)copyWithIconDescriptor:(id)arg1;
- (id)init;
- (id)initWithItem:(id)arg1 appearance:(long long)arg2;
- (void)setAppearance:(long long)arg1;
- (long long)viewType;

@end
