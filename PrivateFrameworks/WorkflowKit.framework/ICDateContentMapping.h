
@interface ICDateContentMapping : ICContentMapping {
    NSDateFormatter * _dateFormatter;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (id)dateFormatter;
- (void)getStringRepresentation:(id /* block */)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (id)initWithDefinition:(id)arg1;
- (void)setDateFormatter:(id)arg1;

@end
