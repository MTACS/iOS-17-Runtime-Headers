
@interface _NSStandardTextGraphicsContextProvider : NSObject <NSTextGraphicsContextProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)colorClassForApplicationFrameworkContext:(long long)arg1;
+ (id)graphicsContextForApplicationFrameworkContext:(long long)arg1;

@end
