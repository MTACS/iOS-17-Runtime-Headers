
@interface VKCVisualSearchResultInfo : NSObject {
    long long  _domain;
    VKCVisualSearchResultItem * _item;
}

@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *displayMessage;
@property (nonatomic) long long domain;
@property (nonatomic, readonly) NSString *filledInfoButtonGlyphName;
@property (nonatomic, readonly) NSString *glyphName;
@property (nonatomic, readonly) NSString *infoButtonGlyphName;
@property (nonatomic, retain) VKCVisualSearchResultItem *item;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedBoundingRect;

- (void).cxx_destruct;
- (bool)_forceDefaultGlyphForDomain:(long long)arg1;
- (id)_infoButtonGlyphName;
- (long long)calcDomain;
- (id)displayLabel;
- (id)displayMessage;
- (long long)domain;
- (id)filledInfoButtonGlyphName;
- (id)glyphName;
- (id)infoButtonGlyphName;
- (id)initWithResultItem:(id)arg1;
- (id)item;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingRect;
- (void)setDomain:(long long)arg1;
- (void)setItem:(id)arg1;

@end
