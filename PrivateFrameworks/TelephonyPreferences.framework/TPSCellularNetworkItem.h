
@interface TPSCellularNetworkItem : NSObject {
    NSString * _identifier;
    NSString * _localizedName;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 localizedName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellularNetworkItem:(id)arg1;
- (id)localizedName;
- (id)name;

@end
