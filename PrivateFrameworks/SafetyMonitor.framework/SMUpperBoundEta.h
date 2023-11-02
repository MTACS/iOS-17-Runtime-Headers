
@interface SMUpperBoundEta : NSObject <NSSecureCoding> {
    NSDate * _crowFliesUpperBoundEta;
    NSDate * _mapsUpperBoundEta;
}

@property (nonatomic, readonly) NSDate *crowFliesUpperBoundEta;
@property (nonatomic, readonly) NSDate *mapsUpperBoundEta;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)crowFliesUpperBoundEta;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapsUpperBoundEta:(id)arg1 crowFliesUpperBoundEta:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mapsUpperBoundEta;

@end
