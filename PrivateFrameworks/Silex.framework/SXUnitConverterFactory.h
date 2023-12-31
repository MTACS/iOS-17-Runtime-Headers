
@interface SXUnitConverterFactory : NSObject <SXUnitConverterFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createUnitConverterWithComponentWidth:(double)arg1 parentWidth:(double)arg2 layoutOptions:(id)arg3;

@end
