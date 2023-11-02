
@interface WFActionSearchGroup : NSObject {
    NSArray * _actions;
    NSString * _identifier;
    NSString * _localizedName;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;

- (void).cxx_destruct;
- (id)actions;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3;
- (id)localizedName;

@end
