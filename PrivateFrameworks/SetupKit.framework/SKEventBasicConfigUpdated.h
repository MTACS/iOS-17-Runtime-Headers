
@interface SKEventBasicConfigUpdated : SKEvent {
    NSDictionary * _basicConfig;
}

@property (nonatomic, readonly, copy) NSDictionary *basicConfig;

- (void).cxx_destruct;
- (id)basicConfig;
- (id)descriptionWithLevel:(int)arg1;
- (id)initWithBasicConfig:(id)arg1;

@end
