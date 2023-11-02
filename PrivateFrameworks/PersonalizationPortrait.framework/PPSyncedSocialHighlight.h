
@interface PPSyncedSocialHighlight : NSObject <NSSecureCoding> {
    PPSocialHighlight * _highlight;
    NSString * _originatingDeviceId;
    NSDate * _rankingDate;
}

@property (nonatomic, readonly) PPSocialHighlight *highlight;
@property (nonatomic, readonly) NSString *originatingDeviceId;
@property (nonatomic, readonly) NSDate *rankingDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)highlight;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighlight:(id)arg1 rankingDate:(id)arg2 originatingDeviceId:(id)arg3;
- (id)originatingDeviceId;
- (id)rankingDate;

@end
