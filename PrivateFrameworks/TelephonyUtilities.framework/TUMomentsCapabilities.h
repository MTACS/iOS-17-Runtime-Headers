
@interface TUMomentsCapabilities : NSObject <NSSecureCoding> {
    int  _availability;
    NSSet * _supportedMediaTypes;
}

@property (nonatomic, readonly) int availability;
@property (nonatomic, readonly, copy) NSSet *supportedMediaTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)availability;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAvailability:(int)arg1 supportedMediaTypes:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCapabilities:(id)arg1;
- (id)supportedMediaTypes;

@end
