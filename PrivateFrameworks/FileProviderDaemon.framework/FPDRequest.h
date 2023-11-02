
@interface FPDRequest : NSObject {
    bool  _allowsResurrection;
    struct { 
        unsigned int val[8]; 
    }  _audit_token;
    NSDate * _date;
    NSString * _executablePath;
    bool  _fromPOSIX;
    int  _pid;
    NSString * _processName;
    struct { 
        long long location; 
        long long length; 
    }  _providedExtent;
    bool  _providerInitiated;
    unsigned int  _qos;
    struct { 
        long long location; 
        long long length; 
    }  _requestedExtent;
    bool  _selectedForMaterialization;
    bool  _shouldFailCoordinationIfDownloadRequired;
    NSString * _userProcessName;
}

@property (nonatomic) bool allowsResurrection;
@property (nonatomic) struct { unsigned int x1[8]; } audit_token;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *executablePath;
@property (getter=isFromPOSIX, nonatomic, readonly) bool fromPOSIX;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic) struct { long long x1; long long x2; } providedExtent;
@property (getter=isProviderInitiated, nonatomic) bool providerInitiated;
@property (nonatomic, readonly) unsigned int qos;
@property (nonatomic) struct { long long x1; long long x2; } requestedExtent;
@property (nonatomic) bool selectedForMaterialization;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic) bool shouldFailCoordinationIfDownloadRequired;
@property (nonatomic, readonly) NSString *userProcessName;

+ (id)UUIDForExecutablePath:(id)arg1;
+ (id)fixupProcessName:(id)arg1;
+ (id)requestForPID:(int)arg1;
+ (id)requestForPID:(int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 fromPOSIX:(bool)arg3;
+ (id)requestForPID:(int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 fromPOSIX:(bool)arg3 kernelFileInfo:(id)arg4;
+ (id)requestForPID:(int)arg1 fromPOSIX:(bool)arg2;
+ (id)requestForPID:(int)arg1 fromPOSIX:(bool)arg2 kernelFileInfo:(id)arg3;
+ (id)requestForSelf;
+ (id)requestForXPCConnection:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsResurrection;
- (struct { unsigned int x1[8]; })audit_token;
- (id)date;
- (id)description;
- (id)executablePath;
- (id)initWithPID:(int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 fromPOSIX:(bool)arg3 withExtent:(struct { long long x1; long long x2; })arg4;
- (bool)isFromPOSIX;
- (bool)isPermittedToAttributeRequestingExecutable:(id)arg1;
- (bool)isProviderInitiated;
- (id)nsfpRequestForSession:(id)arg1;
- (id)nsfpRequestForSession:(id)arg1 isSpeculative:(bool)arg2;
- (int)pid;
- (id)processName;
- (struct { long long x1; long long x2; })providedExtent;
- (unsigned int)qos;
- (struct { long long x1; long long x2; })requestedExtent;
- (bool)selectedForMaterialization;
- (void)setAllowsResurrection:(bool)arg1;
- (void)setAudit_token:(struct { unsigned int x1[8]; })arg1;
- (void)setProvidedExtent:(struct { long long x1; long long x2; })arg1;
- (void)setProviderInitiated:(bool)arg1;
- (void)setRequestedExtent:(struct { long long x1; long long x2; })arg1;
- (void)setSelectedForMaterialization:(bool)arg1;
- (void)setShouldFailCoordinationIfDownloadRequired:(bool)arg1;
- (id)shortDescription;
- (bool)shouldFailCoordinationIfDownloadRequired;
- (id)userProcessName;

@end
