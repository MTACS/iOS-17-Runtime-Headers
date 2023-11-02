
@interface PMMTelephonyConnection : NSObject {
    struct __CTServerConnection { } * _ctServerConnnectionRef;
}

@property (nonatomic, readonly) bool phoneCallActiveOrHeld;

- (void)dealloc;
- (id)init;
- (bool)phoneCallActiveOrHeld;

@end
