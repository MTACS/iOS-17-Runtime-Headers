
@interface HAPSupportedDiagnosticsSnapshot : NSObject <HAPTLVProtocol, NSCopying> {
    HAPDiagnosticsSnapshotAudioWrapper * _audioDiagnostics;
    HAPDiagnosticsSnapshotFormatWrapper * _format;
    HAPDiagnosticsSnapshotOptionsWrapper * _options;
    HAPDiagnosticsSnapshotTypeWrapper * _type;
}

@property (nonatomic, retain) HAPDiagnosticsSnapshotAudioWrapper *audioDiagnostics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPDiagnosticsSnapshotFormatWrapper *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPDiagnosticsSnapshotOptionsWrapper *options;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPDiagnosticsSnapshotTypeWrapper *type;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)audioDiagnostics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)format;
- (id)init;
- (id)initWithFormat:(id)arg1 type:(id)arg2 audioDiagnostics:(id)arg3 options:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)options;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAudioDiagnostics:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
