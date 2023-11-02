
@interface BLSHFlipbookInvalidationTelemetryData : NSObject {
    bool  _didClearDateSpecifiers;
    NSArray * _environmentIdentifiers;
    BLSHFlipbookFramesHistogram * _invalidatedFramesHistogram;
    NSString * _reason;
    NSString * _source;
    double  _timestamp;
    bool  _wasReset;
}

@property (nonatomic, readonly) bool didClearDateSpecifiers;
@property (nonatomic, readonly) NSArray *environmentIdentifiers;
@property (nonatomic, readonly) BLSHFlipbookFramesHistogram *invalidatedFramesHistogram;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) bool wasReset;

- (void).cxx_destruct;
- (id)description;
- (bool)didClearDateSpecifiers;
- (id)environmentIdentifiers;
- (id)initWithTimestamp:(double)arg1 reason:(id)arg2 source:(id)arg3 didClearDateSpecifiers:(bool)arg4 wasReset:(bool)arg5 invalidatedFramesHistogram:(id)arg6 environmentIdentifiers:(id)arg7;
- (id)invalidatedFramesHistogram;
- (id)reason;
- (id)source;
- (double)timestamp;
- (bool)wasReset;

@end
