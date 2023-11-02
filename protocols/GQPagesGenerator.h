
@protocol GQPagesGenerator <NSObject>

@required

+ (int)beginPublication:(GQDSLPublication *)arg1 state:(GQSDocument *)arg2;
+ (int)endPublication:(GQDSLPublication *)arg1 state:(GQSDocument *)arg2;
+ (Class)enterBodyStorage:(GQSDocument *)arg1;
+ (Class)enterMainDrawablesForPage:(unsigned int)arg1 state:(GQSDocument *)arg2;
+ (int)handleFooters:(struct __CFArray { }*)arg1 state:(GQSDocument *)arg2;
+ (int)handleHeaders:(struct __CFArray { }*)arg1 state:(GQSDocument *)arg2;
+ (int)handlePageSetup:(GQDSLPublication *)arg1 state:(GQSDocument *)arg2;
+ (int)handleSectionStyle:(GQDSStyle *)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(GQSDocument *)arg4;
+ (int)handleStylesheet:(GQDSLPublication *)arg1 state:(GQSDocument *)arg2;
+ (int)setCurrentPageIndex:(int)arg1 state:(GQSDocument *)arg2;

@end
