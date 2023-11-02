
@interface CNContactContainerPickerItem : NSObject {
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)identifier;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
