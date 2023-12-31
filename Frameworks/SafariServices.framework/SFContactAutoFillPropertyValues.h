
@interface SFContactAutoFillPropertyValues : NSObject {
    NSString * _property;
    long long  _selectedIndex;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) NSString *property;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, readonly) SFContactAutoFillValue *selectedValue;
@property (nonatomic, readonly, copy) NSArray *values;

- (void).cxx_destruct;
- (id)initWithValues:(id)arg1 property:(id)arg2;
- (id)property;
- (long long)selectedIndex;
- (id)selectedValue;
- (void)setSelectedIndex:(long long)arg1;
- (id)values;

@end
