
@interface _COMeshControllerPing : COMeshRequest <COOnDemandCreationMeshRequestProtocol> {
    int  _listeningPort;
    double  _responseTimeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int listeningPort;
@property (nonatomic, readonly) double responseTimeout;
@property (readonly) Class superclass;

+ (id)acceptableResponses;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)initWithTimeout:(double)arg1 listeningPort:(int)arg2;
- (int)listeningPort;
- (double)responseTimeout;

@end
