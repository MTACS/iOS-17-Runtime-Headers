
@interface CHCTLD : NSObject {
    CRCTLD * _ctld;
    CRCTLDConfig * _ctldConfig;
}

@property (retain) CRCTLD *ctld;
@property (retain) CRCTLDConfig *ctldConfig;

- (void).cxx_destruct;
- (id)ctld;
- (id)ctldConfig;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;
- (id)mergeStrokeGroups:(id)arg1;
- (id)orderStrokeGroups:(id)arg1;
- (void)setCtld:(id)arg1;
- (void)setCtldConfig:(id)arg1;
- (id)strokeGroupRegions:(id)arg1;

@end
