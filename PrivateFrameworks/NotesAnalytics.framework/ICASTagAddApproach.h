
@interface ICASTagAddApproach : NSObject <AADataType> {
    long long  _tagAddApproach;
}

@property (nonatomic, readonly) long long tagAddApproach;

- (id)initWithTagAddApproach:(long long)arg1;
- (long long)tagAddApproach;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
