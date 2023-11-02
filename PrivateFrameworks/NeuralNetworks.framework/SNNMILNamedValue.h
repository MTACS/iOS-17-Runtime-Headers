
@interface SNNMILNamedValue : SNNMILValue {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)name;

@end
