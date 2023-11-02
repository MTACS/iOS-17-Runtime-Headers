
@interface MLFairPlayDecryptSessionManager : NSObject {
    NSMutableDictionary * _modelPathToSessionID;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned char x_4_1_3[136]; unsigned int x_4_1_4; unsigned char x_4_1_5[4096]; unsigned char x_4_1_6[128]; } x4; struct { unsigned char x_5_1_1[16]; unsigned char x_5_1_2[16]; unsigned char x_5_1_3[16]; unsigned char x_5_1_4[128]; } x5; } * _sessionContext;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (readonly, retain) NSMutableDictionary *modelPathToSessionID;
@property (readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned char x_4_1_3[136]; unsigned int x_4_1_4; unsigned char x_4_1_5[4096]; unsigned char x_4_1_6[128]; } x4; struct { unsigned char x_5_1_1[16]; unsigned char x_5_1_2[16]; unsigned char x_5_1_3[16]; unsigned char x_5_1_4[128]; } x5; }*sessionContext;
@property (readonly, retain) NSObject<OS_dispatch_queue> *syncQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)modelPathToSessionID;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned char x_4_1_3[136]; unsigned int x_4_1_4; unsigned char x_4_1_5[4096]; unsigned char x_4_1_6[128]; } x4; struct { unsigned char x_5_1_1[16]; unsigned char x_5_1_2[16]; unsigned char x_5_1_3[16]; unsigned char x_5_1_4[128]; } x5; }*)sessionContext;
- (bool)startDecryptionOfModelAtPath:(id)arg1 usingKeyBlob:(id)arg2 teamIdentifier:(id)arg3 error:(id*)arg4;
- (int)stopDecryptionOfModelAtPath:(id)arg1;
- (bool)stopDecryptionOfModelAtPath:(id)arg1 error:(id*)arg2;
- (id)syncQueue;

@end
