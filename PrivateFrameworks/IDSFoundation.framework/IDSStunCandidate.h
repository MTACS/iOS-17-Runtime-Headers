
@interface IDSStunCandidate : NSObject {
    bool  _active;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _address;
    NSString * _allocbindDataBlob;
    unsigned int  _dataSoMask;
    unsigned int  _dataSoMasks;
    double  _extIPDetectionStartTime;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _external;
    int  _index;
    unsigned short  _linkFlags;
    unsigned int  _mtu;
    struct { 
        int length; 
        unsigned char data[12]; 
    }  _prefix;
    unsigned long long  _priority;
    unsigned int  _radioAccessTechnology;
    long long  _transport;
    unsigned long long  _type;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*address;
@property (readonly) NSString *addressString;
@property (nonatomic, copy) NSString *allocbindDataBlob;
@property (nonatomic) unsigned int dataSoMask;
@property (nonatomic) double extIPDetectionStartTime;
@property (nonatomic) struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*external;
@property (nonatomic, readonly) int index;
@property (nonatomic) unsigned short linkFlags;
@property (nonatomic) unsigned int mtu;
@property (nonatomic) struct { int x1; unsigned char x2[12]; }*prefix;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic, readonly) long long transport;
@property (nonatomic, readonly) unsigned long long type;

+ (id)candidateWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned int)arg3 mtu:(unsigned int)arg4 index:(int)arg5 address:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg6 external:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg7;

- (void).cxx_destruct;
- (bool)active;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)address;
- (id)addressString;
- (id)allocbindDataBlob;
- (unsigned int)dataSoMask;
- (void)dealloc;
- (id)description;
- (double)extIPDetectionStartTime;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)external;
- (bool)hasNATIPv4Address;
- (bool)hasNATIPv4External;
- (int)index;
- (id)initWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned int)arg3 mtu:(unsigned int)arg4 index:(int)arg5 address:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg6 external:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg7;
- (bool)isCellularStunCandidate;
- (bool)isCompatibleWithStunCandidate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLinkLocalStunCandidate;
- (bool)isRelayStunCandidate;
- (bool)isSameNetworkType:(id)arg1;
- (bool)isServerReflexiveStunCandidate;
- (unsigned short)linkFlags;
- (unsigned int)mtu;
- (struct { int x1; unsigned char x2[12]; }*)prefix;
- (unsigned long long)priority;
- (unsigned int)radioAccessTechnology;
- (void)setActive:(bool)arg1;
- (void)setAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 external:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2;
- (void)setAllocbindDataBlob:(id)arg1;
- (void)setDataSoMask:(unsigned int)arg1;
- (void)setExtIPDetectionStartTime:(double)arg1;
- (void)setExternal:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (void)setExternalAddress:(id)arg1;
- (void)setLinkFlags:(unsigned short)arg1;
- (void)setLocalPort:(unsigned short)arg1;
- (void)setMtu:(unsigned int)arg1;
- (void)setPrefix:(struct { int x1; unsigned char x2[12]; }*)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;
- (long long)transport;
- (unsigned long long)type;
- (void)updateTransport:(long long)arg1;

@end
