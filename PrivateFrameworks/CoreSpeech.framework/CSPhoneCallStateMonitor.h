
@interface CSPhoneCallStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (bool)firstPartyCall;
- (unsigned long long)phoneCallState;

@end
