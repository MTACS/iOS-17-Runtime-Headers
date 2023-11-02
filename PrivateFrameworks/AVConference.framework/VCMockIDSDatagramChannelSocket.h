
@interface VCMockIDSDatagramChannelSocket : VCMockIDSDatagramChannel {
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    }  _localAddress;
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    }  _remoteAddress;
}

- (void)dealloc;
- (id)initRequiresOptions:(bool)arg1 localIP:(id)arg2 localPort:(short)arg3 remoteIP:(id)arg4 remotePort:(short)arg5;
- (int)readyToRead;
- (void)setAllSubscribedStreamIDsOnOptions:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; double x10; unsigned long long x11; bool x12; unsigned long long x13; unsigned char x14[16]; bool x15; bool x16; }*)arg1;
- (void)setIsHopByHopEncryptedOnOptions:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; double x10; unsigned long long x11; bool x12; unsigned long long x13; unsigned char x14[16]; bool x15; bool x16; }*)arg1;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned char x3; unsigned short x4; unsigned char x5; })arg3 options:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; double x10; unsigned long long x11; bool x12; unsigned long long x13; unsigned char x14[16]; bool x15; bool x16; }*)arg4 completionHandler:(id /* block */)arg5;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 flags:(struct { BOOL x1; unsigned short x2; unsigned char x3; unsigned short x4; unsigned char x5; })arg3 completionHandler:(id /* block */)arg4;
- (void)writeDatagrams:(const void**)arg1 datagramsSize:(unsigned int*)arg2 datagramsInfo:(struct { BOOL x1; unsigned short x2; unsigned char x3; unsigned short x4; unsigned char x5; }*)arg3 datagramsCount:(int)arg4 options:(struct { /* ? */ }**)arg5 completionHandler:(id /* block */)arg6;

@end
