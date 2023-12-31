
@interface NSSExternalAnalyticsRequest : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSSExternalAnalyticsRequestMetadata * _metadata;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSSExternalAnalyticsRequestMetadata *metadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 metadata:(id)arg2;
- (id)metadata;

@end
