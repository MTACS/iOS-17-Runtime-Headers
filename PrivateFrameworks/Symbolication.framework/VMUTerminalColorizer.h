
@interface VMUTerminalColorizer : NSObject

+ (id)colorize:(id)arg1 withColor:(unsigned int)arg2 bold:(bool)arg3;
+ (id)controlCodeResetString;
+ (id)startColorCodeString:(unsigned int)arg1;

@end
