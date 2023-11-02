
@interface ICASCellularRadioAccessTechnology : NSObject <AADataType> {
    long long  _cellularRadioAccessTechnology;
}

@property (nonatomic, readonly) long long cellularRadioAccessTechnology;

- (long long)cellularRadioAccessTechnology;
- (id)initWithCellularRadioAccessTechnology:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
