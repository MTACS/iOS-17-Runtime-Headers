
@interface RWIProtocolCSSFont : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool synthesizedBold;
@property (nonatomic) bool synthesizedOblique;
@property (nonatomic, copy) NSArray *variationAxes;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)displayName;
- (id)initWithDisplayName:(id)arg1 variationAxes:(id)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setSynthesizedBold:(bool)arg1;
- (void)setSynthesizedOblique:(bool)arg1;
- (void)setVariationAxes:(id)arg1;
- (bool)synthesizedBold;
- (bool)synthesizedOblique;
- (id)variationAxes;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithDisplayName:(id)arg1 variationAxes:(id)arg2;

@end
