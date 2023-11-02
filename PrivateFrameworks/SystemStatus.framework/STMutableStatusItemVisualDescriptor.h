
@interface STMutableStatusItemVisualDescriptor : STStatusItemVisualDescriptor {
    NSString * imageName;
    NSString * packageName;
    NSString * systemImageName;
    NSString * textLabel;
}

@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *packageName;
@property (nonatomic, copy) NSString *systemImageName;
@property (nonatomic, copy) NSString *textLabel;

- (void).cxx_destruct;
- (id)imageName;
- (id)packageName;
- (void)setImageName:(id)arg1;
- (void)setPackageName:(id)arg1;
- (void)setSystemImageName:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)systemImageName;
- (id)textLabel;

@end
