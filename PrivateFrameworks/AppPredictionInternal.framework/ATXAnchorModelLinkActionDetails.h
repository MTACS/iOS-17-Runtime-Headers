
@interface ATXAnchorModelLinkActionDetails : NSObject {
    NSString * _actionId;
    NSString * _bundleId;
    LNAction * _linkAction;
}

@property (nonatomic, readonly) NSString *actionId;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) LNAction *linkAction;

+ (id)encodedStringForLinkAction:(id)arg1;
+ (id)linkActionFromEncodedString:(id)arg1;

- (void).cxx_destruct;
- (id)actionId;
- (id)bundleId;
- (id)init;
- (id)initWithBundleID:(id)arg1 actionId:(id)arg2 linkAction:(id)arg3;
- (id)initWithBundleID:(id)arg1 actionId:(id)arg2 linkActionEncodedString:(id)arg3;
- (id)linkAction;

@end
