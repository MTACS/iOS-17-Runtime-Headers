
@interface CNPropertyPlaceholderItem : CNCardGroupItem {
    NSString * _property;
}

@property (nonatomic, retain) NSString *property;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithProperty:(id)arg1;
- (id)property;
- (void)setProperty:(id)arg1;
- (id)title;

@end
