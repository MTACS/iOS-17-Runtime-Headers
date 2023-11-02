
@interface CoreODIEssentials.ODINFHardwareMonitor : SwiftNativeNSObject <NFHardwareEventListener> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
}

- (void)hardwareStateDidChange;
- (id)init;

@end
