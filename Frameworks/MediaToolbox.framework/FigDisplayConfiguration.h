
@interface FigDisplayConfiguration : NSObject {
    struct __CFDictionary { } * _fvdOptions;
    struct OpaqueFigSimpleMutex { } * _lock;
    unsigned long long  _preset;
}

@property (nonatomic) NSString *clientName;
@property (nonatomic) long long clientPID;
@property (nonatomic) long long imagePoolSize;
@property (nonatomic) struct CGSize { double x1; double x2; } maxDisplaySize;
@property (nonatomic) long long numOfIdleFrames;
@property (nonatomic) unsigned long long preset;
@property (nonatomic) unsigned int refreshRate;

- (id)clientName;
- (long long)clientPID;
- (void)dealloc;
- (id)description;
- (struct __CFDictionary { }*)getFVDOptions;
- (struct OpaqueFigSimpleMutex { }*)getLock;
- (long long)imagePoolSize;
- (id)init;
- (struct CGSize { double x1; double x2; })maxDisplaySize;
- (long long)numOfIdleFrames;
- (unsigned long long)preset;
- (unsigned int)refreshRate;
- (void)setClientName:(id)arg1;
- (void)setClientPID:(long long)arg1;
- (void)setImagePoolSize:(long long)arg1;
- (void)setMaxDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumOfIdleFrames:(long long)arg1;
- (void)setPreset:(unsigned long long)arg1;
- (void)setRefreshRate:(unsigned int)arg1;

@end
