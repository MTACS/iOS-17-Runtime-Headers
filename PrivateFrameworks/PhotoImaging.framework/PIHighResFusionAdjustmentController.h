
@interface PIHighResFusionAdjustmentController : PIAdjustmentController

@property (nonatomic, copy) NSDictionary *alignment;

+ (id)alignmentKey;

- (id)alignment;
- (id)initWithAdjustment:(id)arg1;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setAlignment:(id)arg1;

@end
