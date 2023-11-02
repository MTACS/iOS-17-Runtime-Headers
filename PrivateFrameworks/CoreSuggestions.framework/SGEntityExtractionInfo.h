
@interface SGEntityExtractionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contactIdentifier;
    struct SGUnixTimestamp_ { 
        double secondsFromUnixEpoch; 
    }  _creationTimestamp;
    long long  _entityType;
    long long  _extractionType;
    NSString * _source;
    NSString * _spotlightIdentifier;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) struct SGUnixTimestamp_ { double x1; } creationTimestamp;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) long long extractionType;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSString *spotlightIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct SGUnixTimestamp_ { double x1; })creationTimestamp;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)entityType;
- (long long)extractionType;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpotlightIdentifier:(id)arg1 source:(id)arg2 entityType:(long long)arg3 creationTimestamp:(struct SGUnixTimestamp_ { double x1; })arg4 extractionType:(long long)arg5 contactIdentifier:(id)arg6;
- (id)source;
- (id)spotlightIdentifier;

@end
