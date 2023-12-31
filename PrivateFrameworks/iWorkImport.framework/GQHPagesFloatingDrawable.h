
@interface GQHPagesFloatingDrawable : NSObject <GQDrawablesGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)beginDrawables:(id)arg1;
+ (Class)beginTable:(id)arg1;
+ (int)endDrawables:(id)arg1;
+ (int)handleDrawable:(id)arg1 state:(id)arg2;

@end
