
@interface SXDocumentStyle : SXJSONObject <SXDocumentStyle>

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *topBackgroundColor;
@property (nonatomic, readonly) SXJSONLinearGradient *topBackgroundGradient;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

@end
