
@interface ICASSwitchSelectionContext : NSObject <AADataType> {
    long long  _switchSelectionContext;
}

@property (nonatomic, readonly) long long switchSelectionContext;

- (id)initWithSwitchSelectionContext:(long long)arg1;
- (long long)switchSelectionContext;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
