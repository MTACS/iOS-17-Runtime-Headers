
@interface DockKitCore.System : NSObject <NSSecureCoding> {
    void accessory;
    void components;
    void id;
    void name;
    void type;
}

@property (nonatomic, copy) NSDictionary *components;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)components;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithAccessory:(id)arg1 id:(long long)arg2 type:(long long)arg3 name:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setComponents:(id)arg1;

@end
