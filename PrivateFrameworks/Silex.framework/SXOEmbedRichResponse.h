
@interface SXOEmbedRichResponse : SXOEmbedResponse

@property (nonatomic, readonly) NSString *HTML;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double width;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

- (struct CGSize { double x1; double x2; })size;

@end
