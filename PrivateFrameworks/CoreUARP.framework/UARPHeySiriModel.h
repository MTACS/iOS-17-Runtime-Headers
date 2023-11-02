
@interface UARPHeySiriModel : NSObject {
    NSMutableArray * _downloadedModels;
    unsigned long long  _engineType;
    NSMutableArray * _fallbackModels;
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
    NSMutableArray * _newModels;
    NSMutableArray * _preInstalledModels;
    NSURL * _url;
}

@property (readonly, copy) NSArray *downloadedModels;
@property (readonly) unsigned long long engineType;
@property (readonly, copy) NSArray *fallbackModels;
@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly, copy) NSArray *newModels;
@property (readonly, copy) NSArray *preInstalledModels;

+ (id)hsModelWithUarpPayload:(id)arg1;
+ (id)uarpPayloadWithHSModel:(id)arg1;

- (void).cxx_destruct;
- (void)addHeySiriDownloadedModel:(id)arg1;
- (void)addHeySiriFallbackModel:(id)arg1;
- (void)addHeySiriPreinstalledModel:(id)arg1;
- (void)addHeySiriPrimaryModel:(id)arg1;
- (id)downloadedModels;
- (unsigned long long)engineType;
- (void)expandSuperBinaryMetaData:(id)arg1;
- (void)expandSuperBinaryPayloads:(id)arg1;
- (bool)expandURL:(id*)arg1;
- (id)exportAsSuperBinary:(id*)arg1;
- (id)fallbackModels;
- (id)initWithURL:(id)arg1;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (id)newModels;
- (id)preInstalledModels;

@end
