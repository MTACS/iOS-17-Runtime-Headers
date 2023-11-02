
@interface TUNeighborhoodHandoffContext : NSObject <NSSecureCoding> {
    long long  _pullContext;
    long long  _type;
}

@property (nonatomic, readonly) long long pullContext;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandoffType:(long long)arg1;
- (id)initWithPullContext:(long long)arg1;
- (long long)pullContext;
- (long long)type;

@end
