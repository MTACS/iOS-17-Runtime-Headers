
@interface PKValueAddedMerchant : NSObject <NSSecureCoding> {
    NSData * _identifier;
    long long  _timesPresented;
}

@property (nonatomic, retain) NSData *identifier;
@property (nonatomic) long long timesPresented;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTimesPresented:(long long)arg1;
- (long long)timesPresented;

@end
