
@interface UARPPacketDumper : NSObject {
    BloodhoundPacketDumper * _bloodhoundDumper;
}

- (void).cxx_destruct;
- (void)dump:(id)arg1 accessoryID:(id)arg2 uarpStatus:(unsigned int)arg3 direction:(unsigned long long)arg4;
- (id)initWithFileName:(id)arg1;

@end
