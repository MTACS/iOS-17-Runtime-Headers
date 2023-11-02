
@interface SSEnvironmentElementMetadata : NSObject <BSXPCSecureCoding, SSLoggable> {
    NSArray * _rectsInElement;
    NSString * _userActivityTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (nonatomic, copy) NSArray *rectsInElement;
@property (readonly) Class superclass;
@property (setter=setUserActivityTitle:, nonatomic, copy) NSString *userActivityTitle;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_decodedRectsForEncodedRects:(id)arg1;
- (id)_encodableRects;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)loggableDescription;
- (id)rectsInElement;
- (void)setRectsInElement:(id)arg1;
- (void)setUserActivityTitle:(id)arg1;
- (id)userActivityTitle;

@end
