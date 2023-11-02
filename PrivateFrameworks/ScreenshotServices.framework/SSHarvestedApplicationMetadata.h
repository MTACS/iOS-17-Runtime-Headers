
@interface SSHarvestedApplicationMetadata : NSObject <BSXPCSecureCoding, SSLoggable> {
    bool  _canGenerateDocument;
    NSArray * _contentRects;
    NSString * _userActivityTitle;
    NSURL * _userActivityURL;
}

@property (nonatomic) bool canGenerateDocument;
@property (nonatomic, copy) NSArray *contentRects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userActivityTitle;
@property (nonatomic, copy) NSURL *userActivityURL;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (bool)canGenerateDocument;
- (id)contentRects;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)loggableDescription;
- (void)setCanGenerateDocument:(bool)arg1;
- (void)setContentRects:(id)arg1;
- (void)setUserActivityTitle:(id)arg1;
- (void)setUserActivityURL:(id)arg1;
- (id)userActivityTitle;
- (id)userActivityURL;

@end
