
@interface GDVisualIdentifierViewLocation : GDLocation {
    NSString * _label;
}

@property (nonatomic, readonly) NSArray *addresses;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSArray *names;

- (void).cxx_destruct;
- (id)description;
- (id)label;
- (void)setLabel:(id)arg1;

@end
