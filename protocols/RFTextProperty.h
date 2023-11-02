
@protocol RFTextProperty <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (bool)is_safe_for_logging;
- (NSData *)jsonData;
- (void)setIs_safe_for_logging:(bool)arg1;
- (void)setText_elements:(NSArray *)arg1;
- (NSArray *)text_elements;

@end
