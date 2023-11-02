
@interface IDSTCPLink : NSObject <IDSLink> {
    int  _addressFamily;
    <IDSLinkDelegate> * _alternateDelegate;
    NSString * _cbuuid;
    NSIndexSet * _cellularInterfaceIndices;
    struct IDSTCPConnection_ { int x1; bool x2; unsigned int x3; int x4; struct IDSNetBuffer_ {} *x5; struct sockaddr_storage { unsigned char x_6_1_1; unsigned char x_6_1_2; BOOL x_6_1_3[6]; long long x_6_1_4; BOOL x_6_1_5[112]; } x6; struct sockaddr_storage { unsigned char x_7_1_1; unsigned char x_7_1_2; BOOL x_7_1_3[6]; long long x_7_1_4; BOOL x_7_1_5[112]; } x7; struct { /* ? */ } *x8; struct { /* ? */ } *x9; struct IDSTCPLinkCounter_ {} *x10; int x11; struct IDSTCPConnection_ {} *x12; id x13; id /* block */ x14; } * _conns;
    struct IDSTCPLinkCounter_ { 
        unsigned long long _totalBytesSent; 
        unsigned long long _totalPacketsSent; 
        unsigned long long _totalBytesReceived; 
        unsigned long long _totalPacketsReceived; 
    }  _counters;
    <IDSLinkDelegate> * _delegate;
    NSString * _deviceUniqueID;
    id /* block */  _getPacketLength;
    bool  _isSSL;
    struct IDSTCPLinkCounter_ { 
        unsigned long long _totalBytesSent; 
        unsigned long long _totalPacketsSent; 
        unsigned long long _totalBytesReceived; 
        unsigned long long _totalPacketsReceived; 
    }  _previousCounters;
    double  _previousReportTime;
    unsigned long long  _state;
    bool  _wifiAssistEnabled;
}

@property <IDSLinkDelegate> *alternateDelegate;
@property (retain) NSString *cbuuid;
@property (nonatomic, retain) NSIndexSet *cellularInterfaceIndices;
@property (readonly, copy) NSString *debugDescription;
@property <IDSLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long headerOverhead;
@property (nonatomic, readonly) bool isSSL;
@property (getter=linkTypeString, readonly) NSString *linkTypeString;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool wifiAssistEnabled;

- (void).cxx_destruct;
- (struct IDSTCPConnection_ { int x1; bool x2; unsigned int x3; int x4; struct IDSNetBuffer_ {} *x5; struct sockaddr_storage { unsigned char x_6_1_1; unsigned char x_6_1_2; BOOL x_6_1_3[6]; long long x_6_1_4; BOOL x_6_1_5[112]; } x6; struct sockaddr_storage { unsigned char x_7_1_1; unsigned char x_7_1_2; BOOL x_7_1_3[6]; long long x_7_1_4; BOOL x_7_1_5[112]; } x7; struct { /* ? */ } *x8; struct { /* ? */ } *x9; struct IDSTCPLinkCounter_ {} *x10; int x11; struct IDSTCPConnection_ {} *x12; id x13; id /* block */ x14; }*)_getIDSTCPConnection:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; unsigned int x17; struct sockaddr_storage { unsigned char x_18_1_1; unsigned char x_18_1_2; BOOL x_18_1_3[6]; long long x_18_1_4; BOOL x_18_1_5[112]; } x18; struct sockaddr_storage { unsigned char x_19_1_1; unsigned char x_19_1_2; BOOL x_19_1_3[6]; long long x_19_1_4; BOOL x_19_1_5[112]; } x19; struct sockaddr_storage { unsigned char x_20_1_1; unsigned char x_20_1_2; BOOL x_20_1_3[6]; long long x_20_1_4; BOOL x_20_1_5[112]; } x20; unsigned short x21; unsigned char x22; int x23; struct { char *x_24_1_1; unsigned short x_24_1_2; int x_24_1_3; unsigned short x_24_1_4[12]; unsigned long long x_24_1_5; unsigned char x_24_1_6; unsigned short x_24_1_7; unsigned char x_24_1_8; bool x_24_1_9; bool x_24_1_10; unsigned short x_24_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_24_1_12; bool x_24_1_13; bool x_24_1_14; int x_24_1_15; unsigned short x_24_1_16[4]; unsigned char x_24_1_17; bool x_24_1_18; bool x_24_1_19; bool x_24_1_20; unsigned int x_24_1_21; } x24[8]; }*)arg1;
- (id)alternateDelegate;
- (id)cbuuid;
- (id)cellularInterfaceIndices;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)connect:(int)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 portRange:(unsigned short)arg3 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 clientUUID:(unsigned char)arg5 completionHandler:(id /* block */)arg6;
- (id)copyLinkStatsDict;
- (void)dealloc;
- (id)delegate;
- (id)deviceUniqueID;
- (bool)disconnect:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1 remoteAddress:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg2;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (long long)getPacketLength:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; unsigned int x17; struct sockaddr_storage { unsigned char x_18_1_1; unsigned char x_18_1_2; BOOL x_18_1_3[6]; long long x_18_1_4; BOOL x_18_1_5[112]; } x18; struct sockaddr_storage { unsigned char x_19_1_1; unsigned char x_19_1_2; BOOL x_19_1_3[6]; long long x_19_1_4; BOOL x_19_1_5[112]; } x19; struct sockaddr_storage { unsigned char x_20_1_1; unsigned char x_20_1_2; BOOL x_20_1_3[6]; long long x_20_1_4; BOOL x_20_1_5[112]; } x20; unsigned short x21; unsigned char x22; int x23; struct { char *x_24_1_1; unsigned short x_24_1_2; int x_24_1_3; unsigned short x_24_1_4[12]; unsigned long long x_24_1_5; unsigned char x_24_1_6; unsigned short x_24_1_7; unsigned char x_24_1_8; bool x_24_1_9; bool x_24_1_10; unsigned short x_24_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_24_1_12; bool x_24_1_13; bool x_24_1_14; int x_24_1_15; unsigned short x_24_1_16[4]; unsigned char x_24_1_17; bool x_24_1_18; bool x_24_1_19; bool x_24_1_20; unsigned int x_24_1_21; } x24[8]; }*)arg1 isChannelData:(bool*)arg2;
- (unsigned long long)headerOverhead;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 isSSL:(bool)arg3 getPacketLength:(id /* block */)arg4;
- (void)invalidate;
- (bool)isSSL;
- (id)linkTypeString;
- (void)processIncomingPacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; unsigned int x17; struct sockaddr_storage { unsigned char x_18_1_1; unsigned char x_18_1_2; BOOL x_18_1_3[6]; long long x_18_1_4; BOOL x_18_1_5[112]; } x18; struct sockaddr_storage { unsigned char x_19_1_1; unsigned char x_19_1_2; BOOL x_19_1_3[6]; long long x_19_1_4; BOOL x_19_1_5[112]; } x19; struct sockaddr_storage { unsigned char x_20_1_1; unsigned char x_20_1_2; BOOL x_20_1_3[6]; long long x_20_1_4; BOOL x_20_1_5[112]; } x20; unsigned short x21; unsigned char x22; int x23; struct { char *x_24_1_1; unsigned short x_24_1_2; int x_24_1_3; unsigned short x_24_1_4[12]; unsigned long long x_24_1_5; unsigned char x_24_1_6; unsigned short x_24_1_7; unsigned char x_24_1_8; bool x_24_1_9; bool x_24_1_10; unsigned short x_24_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_24_1_12; bool x_24_1_13; bool x_24_1_14; int x_24_1_15; unsigned short x_24_1_16[4]; unsigned char x_24_1_17; bool x_24_1_18; bool x_24_1_19; bool x_24_1_20; unsigned int x_24_1_21; } x24[8]; }*)arg1;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; unsigned int x17; struct sockaddr_storage { unsigned char x_18_1_1; unsigned char x_18_1_2; BOOL x_18_1_3[6]; long long x_18_1_4; BOOL x_18_1_5[112]; } x18; struct sockaddr_storage { unsigned char x_19_1_1; unsigned char x_19_1_2; BOOL x_19_1_3[6]; long long x_19_1_4; BOOL x_19_1_5[112]; } x19; struct sockaddr_storage { unsigned char x_20_1_1; unsigned char x_20_1_2; BOOL x_20_1_3[6]; long long x_20_1_4; BOOL x_20_1_5[112]; } x20; unsigned short x21; unsigned char x22; int x23; struct { char *x_24_1_1; unsigned short x_24_1_2; int x_24_1_3; unsigned short x_24_1_4[12]; unsigned long long x_24_1_5; unsigned char x_24_1_6; unsigned short x_24_1_7; unsigned char x_24_1_8; bool x_24_1_9; bool x_24_1_10; unsigned short x_24_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_24_1_12; bool x_24_1_13; bool x_24_1_14; int x_24_1_15; unsigned short x_24_1_16[4]; unsigned char x_24_1_17; bool x_24_1_18; bool x_24_1_19; bool x_24_1_20; unsigned int x_24_1_21; } x24[8]; }*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (unsigned long long)sendPacketBufferArray:(struct { /* ? */ }**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (void)setAlternateDelegate:(id)arg1;
- (void)setCbuuid:(id)arg1;
- (void)setCellularInterfaceIndices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setWiFiAssistState:(bool)arg1;
- (void)setWifiAssistEnabled:(bool)arg1;
- (unsigned long long)state;
- (bool)wifiAssistEnabled;

@end
