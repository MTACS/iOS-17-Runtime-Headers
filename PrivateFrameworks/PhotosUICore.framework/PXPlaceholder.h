
@interface PXPlaceholder : NSObject {
    NSString * _fallbackActionTitle;
    NSString * _subtitle;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *fallbackActionTitle;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (id)featureNotEnabledWithDocumentationURLString:(id)arg1;
+ (id)featureNotImplementedWithTrackingRadar:(long long)arg1;

- (void).cxx_destruct;
- (id)fallbackActionTitle;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 fallbackActionTitle:(id)arg3 url:(id)arg4;
- (id)initWithTitle:(id)arg1 trackingRadar:(long long)arg2;
- (void)performFallbackAction;
- (id)subtitle;
- (id)title;
- (id)url;

@end
