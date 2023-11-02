
@interface WFAQIScaleIMECA : NSObject <WFAQIScale>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

- (id)name;
- (id)scaleCategoryForCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2;

@end
