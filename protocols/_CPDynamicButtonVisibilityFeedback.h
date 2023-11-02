
@protocol _CPDynamicButtonVisibilityFeedback <NSObject>

@required

- (void)addVisibleDynamicButton2s:(_CPButtonForFeedback *)arg1;
- (NSString *)cardSectionIdentifier;
- (void)clearVisibleDynamicButton2s;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCardSectionIdentifier:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVisibleDynamicButton2s:(NSArray *)arg1;
- (unsigned long long)timestamp;
- (NSArray *)visibleDynamicButton2s;
- (_CPButtonForFeedback *)visibleDynamicButton2sAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleDynamicButton2sCount;

@end
