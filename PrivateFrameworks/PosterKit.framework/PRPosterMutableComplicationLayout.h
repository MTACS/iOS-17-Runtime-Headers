
@interface PRPosterMutableComplicationLayout : PRPosterComplicationLayout

@property (nonatomic, copy) NSArray *complications;
@property (nonatomic, copy) PRSWidget *inlineComplication;
@property (nonatomic, copy) NSDictionary *sidebarComplicationIconLayout;
@property (nonatomic, copy) NSArray *sidebarComplications;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

@end
