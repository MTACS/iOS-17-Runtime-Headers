
@interface CNContainerPickerItem : NSObject {
    NSString * _identifier;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)identifier;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
