
@interface WFOnScreenContentServiceOptions : NSObject <NSSecureCoding> {
    NSArray * _supportedItemClasses;
}

@property (nonatomic, readonly) NSArray *supportedItemClasses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedItemClasses:(id)arg1;
- (id)supportedItemClasses;

@end
