
@interface ICASLinkAddApproach : NSObject <AADataType> {
    long long  _linkAddApproach;
}

@property (nonatomic, readonly) long long linkAddApproach;

- (id)initWithLinkAddApproach:(long long)arg1;
- (long long)linkAddApproach;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
