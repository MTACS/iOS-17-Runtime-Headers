
@interface ICASSwitchSelectionType : NSObject <AADataType> {
    long long  _switchSelectionType;
}

@property (nonatomic, readonly) long long switchSelectionType;

- (id)initWithSwitchSelectionType:(long long)arg1;
- (long long)switchSelectionType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
