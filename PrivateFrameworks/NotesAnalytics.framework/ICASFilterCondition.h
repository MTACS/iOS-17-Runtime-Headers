
@interface ICASFilterCondition : NSObject <AADataType> {
    long long  _filterCondition;
}

@property (nonatomic, readonly) long long filterCondition;

- (long long)filterCondition;
- (id)initWithFilterCondition:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
