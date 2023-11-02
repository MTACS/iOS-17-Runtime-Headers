
@interface SBSSystemNotesTakeScreenshotResult : NSObject <BSXPCCoding> {
    FBSDisplayIdentity * _displayIdentity;
    BSMachPortSendRight * _machPortSendRight;
    double  _scale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSMachPortSendRight *machPortSendRight;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displayIdentity;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithDisplay:(id)arg1 sendRight:(id)arg2 scale:(double)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (id)machPortSendRight;
- (double)scale;

@end
