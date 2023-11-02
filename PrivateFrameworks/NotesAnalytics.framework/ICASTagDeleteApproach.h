
@interface ICASTagDeleteApproach : NSObject <AADataType> {
    long long  _tagDeleteApproach;
}

@property (nonatomic, readonly) long long tagDeleteApproach;

- (id)initWithTagDeleteApproach:(long long)arg1;
- (long long)tagDeleteApproach;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
