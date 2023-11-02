
@interface VCVideoRuleCollections : NSObject {
    unsigned char  _encodingType;
    int  _payload;
    NSMutableDictionary * _rules;
    NSMutableArray * _supportedPayloads;
    unsigned char  _transportType;
}

@property (nonatomic, readonly) bool isDecodeSupported;
@property (nonatomic, readonly) bool isEncodeSupported;
@property (readonly) NSDictionary *rules;
@property (readonly) NSArray *supportedPayloads;
@property (nonatomic, readonly) NSSet *supportedTransportTypes;

+ (id)newCorrectedVideoRules:(id)arg1 payload:(int)arg2;

- (void)addSupportedPayload:(int)arg1;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)appendVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)dealloc;
- (id)description;
- (id)filterRules:(id)arg1 byBitrateRule:(id)arg2;
- (id)getVideoRulesForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;
- (id)init;
- (bool)isDecodeSupported;
- (bool)isEncodeSupported;
- (bool)isEqual:(id)arg1;
- (bool)isPayloadSupported:(int)arg1;
- (void)limitRulesFromVideoRules:(int)arg1 frameHeight:(int)arg2 videoRules:(id)arg3;
- (void)limitVideoRulesToMaxWidth:(int)arg1 maxHeight:(int)arg2 transportType:(unsigned char)arg3;
- (void)removeVideoRulesWithWidth:(int)arg1 height:(int)arg2 transportType:(unsigned char)arg3 encodingType:(unsigned char)arg4;
- (id)rules;
- (id)supportedPayloads;
- (id)supportedTransportTypes;
- (id)supportedVideoRulesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (id)supportedVideoRulesSizesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (id)supportedVideoRulesSyncForTransportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;
- (id)supportedVideoSizesForKey:(id)arg1;
- (id)videoRulesCollectionsByRemovingPayload:(int)arg1 andPayload:(int)arg2 removeCellular:(bool)arg3;

@end
