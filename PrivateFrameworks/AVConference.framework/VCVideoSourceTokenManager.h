
@interface VCVideoSourceTokenManager : NSObject {
    unsigned long long  _identifierSeeds;
    NSMutableDictionary * _sourceNames;
    VCVideoSourceTokenManager * _tokenManager;
    NSObject<OS_dispatch_queue> * _tokenManagerQueue;
    NSMutableDictionary * _videoSourceTokens;
}

+ (id)sharedManager;

- (struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })createtokenForDeviceName:(id)arg1 sourceType:(int)arg2;
- (void)dealloc;
- (id)deviceNameForToken:(struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })arg1;
- (id)init;
- (struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })tokenForDeviceName:(id)arg1 sourceType:(int)arg2;

@end
