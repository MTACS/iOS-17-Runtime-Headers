
@interface SGMailQuoteParser : NSObject

+ (id)_tofuRegions:(id)arg1 utf8:(const char *)arg2 isAOSPMail:(bool)arg3;
+ (id)_xWrote:(id)arg1 utf8:(const char *)arg2;
+ (id)quotedRegionsFrom:(id)arg1 isAOSPMail:(bool)arg2 foundToEndOfMessage:(bool*)arg3;

@end
