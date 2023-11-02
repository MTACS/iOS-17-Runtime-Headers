
@interface HUAccessorySetupFlow : NSObject {
    NSArray * _homeKitObjects;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSArray *homeKitObjects;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)description;
- (id)homeKitObjects;
- (id)initWithType:(id)arg1 homeKitObjects:(id)arg2;
- (id)type;

@end
