
@interface ABPostalNameGroupItem : CNCardGroupItem {
    CNMutableContact * _contact;
    NSString * _placeholder;
    NSString * _property;
    SEL  _setter;
    NSString * _value;
}

@property (nonatomic, retain) CNMutableContact *contact;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *property;
@property (nonatomic) SEL setter;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)contact;
- (id)placeholder;
- (id)property;
- (void)setContact:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setSetter:(SEL)arg1;
- (void)setValue:(id)arg1;
- (SEL)setter;
- (id)value;

@end
