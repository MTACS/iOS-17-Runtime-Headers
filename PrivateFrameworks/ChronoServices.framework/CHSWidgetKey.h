
@interface CHSWidgetKey : NSObject <NSCopying, NSSecureCoding> {
    NSString * _hostIdentifier;
    CHSWidgetMetrics * _metrics;
    CHSWidget * _widget;
}

@property (nonatomic, readonly) NSString *hostIdentifier;
@property (nonatomic, readonly) CHSWidgetMetrics *metrics;
@property (nonatomic, readonly) CHSWidget *widget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2 hostIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)widget;

@end
