
@interface OspreyChannelRequestOptions : NSObject {
    bool  _compressionEnabled;
    bool  _forceHTTPv2;
}

@property (getter=isCompressionEnabled, nonatomic) bool compressionEnabled;
@property (nonatomic) bool forceHTTPv2;

- (void)applyToOspreyMutableRequest:(id)arg1;
- (bool)forceHTTPv2;
- (id)init;
- (bool)isCompressionEnabled;
- (void)setCompressionEnabled:(bool)arg1;
- (void)setForceHTTPv2:(bool)arg1;

@end
