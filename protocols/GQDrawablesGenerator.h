
@protocol GQDrawablesGenerator <NSObject>

@required

+ (int)beginDrawables:(GQSDocument *)arg1;
+ (Class)beginTable:(GQSDocument *)arg1;
+ (int)endDrawables:(GQSDocument *)arg1;
+ (int)handleDrawable:(GQDDrawable *)arg1 state:(GQSDocument *)arg2;

@end
