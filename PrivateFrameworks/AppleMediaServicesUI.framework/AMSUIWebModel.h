
@interface AMSUIWebModel : NSObject

+ (id)backgroundColorFromPageModel:(id)arg1;
+ (id)impressionEventFromPageModel:(id)arg1 context:(id)arg2;
+ (id)navigationBarFromPageModel:(id)arg1 context:(id)arg2;
+ (id)pageModelFromJSObject:(id)arg1 context:(id)arg2;
+ (struct CGSize { double x1; double x2; })windowSizeFromJSObject:(id)arg1 key:(id)arg2;
+ (struct CGSize { double x1; double x2; })windowSizeFromPageModel:(id)arg1;

@end
