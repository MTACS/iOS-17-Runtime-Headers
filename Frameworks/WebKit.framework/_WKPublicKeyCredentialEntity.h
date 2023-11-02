
@interface _WKPublicKeyCredentialEntity : NSObject {
    NSString * _icon;
    NSString * _name;
}

@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *name;

- (void)dealloc;
- (id)icon;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;

@end
