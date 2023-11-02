
@interface CNVCardParsedParameter : NSObject {
    NSString * _name;
    NSArray * _values;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *values;

+ (id)parameterWithName:(id)arg1 values:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 values:(id)arg2;
- (id)name;
- (id)values;

@end
