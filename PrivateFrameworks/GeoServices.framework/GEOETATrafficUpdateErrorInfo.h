
@interface GEOETATrafficUpdateErrorInfo : NSObject <NSSecureCoding> {
    NSArray * _internalErrors;
}

@property (nonatomic, readonly) NSArray *internalErrors;

+ (id)key;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)internalErrors;

@end
