
@protocol _SFPBRFVisualProperty <NSObject>

@required

- (void)addVisual_elements:(_SFPBRFVisualElement *)arg1;
- (void)clearVisual_elements;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)is_safe_for_logging;
- (NSData *)jsonData;
- (void)setIs_safe_for_logging:(bool)arg1;
- (void)setVisual_elements:(NSArray *)arg1;
- (NSArray *)visual_elements;
- (_SFPBRFVisualElement *)visual_elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visual_elementsCount;

@end
