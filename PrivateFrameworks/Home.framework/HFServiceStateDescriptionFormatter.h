
@interface HFServiceStateDescriptionFormatter : NSFormatter {
    unsigned long long  _descriptionContext;
}

@property (nonatomic) unsigned long long descriptionContext;

- (unsigned long long)descriptionContext;
- (void)setDescriptionContext:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
