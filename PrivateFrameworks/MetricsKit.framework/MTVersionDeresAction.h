
@interface MTVersionDeresAction : MTTreatmentAction {
    unsigned long long  _precision;
}

@property (nonatomic) unsigned long long precision;

- (id)initWithField:(id)arg1 configDictionary:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;
- (unsigned long long)precision;
- (void)setPrecision:(unsigned long long)arg1;

@end
