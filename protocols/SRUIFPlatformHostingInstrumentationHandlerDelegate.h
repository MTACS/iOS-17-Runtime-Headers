
@protocol SRUIFPlatformHostingInstrumentationHandlerDelegate <NSObject>

@required

- (void)handler:(SRUIFPlatformHostingInstrumentationHandler *)arg1 requestToInstrumentEvent:(PBCodable *)arg2 turn:(AFAnalyticsTurnBasedInstrumentationContext *)arg3 machAbsoluteTime:(unsigned long long)arg4;

@end
