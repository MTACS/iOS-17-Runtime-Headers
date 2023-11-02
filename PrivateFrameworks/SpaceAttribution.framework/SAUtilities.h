
@interface SAUtilities : NSObject

+ (id)createCommaSeparatedString:(id)arg1;
+ (void)getFileSize:(id)arg1 reply:(id /* block */)arg2;
+ (int)killSADaemon;
+ (int)loadSADaemon;
+ (id)splitArray:(id)arg1 into:(int)arg2;

@end
