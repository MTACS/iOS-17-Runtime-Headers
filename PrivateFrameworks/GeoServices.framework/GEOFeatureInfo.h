
@interface GEOFeatureInfo : NSObject {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setState:(long long)arg1;
- (long long)state;

@end
