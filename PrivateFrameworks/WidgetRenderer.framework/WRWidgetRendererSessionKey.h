
@interface WRWidgetRendererSessionKey : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSString * _identifier;
    CHSWidgetMetrics * _metrics;
    CHSWidget * _widget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) CHSWidgetMetrics *metrics;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CHSWidget *widget;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 widget:(id)arg2 metrics:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)widget;

@end
