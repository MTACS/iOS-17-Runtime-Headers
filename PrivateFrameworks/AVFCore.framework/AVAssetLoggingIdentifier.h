
@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier> {
    AVAssetLoggingIdentifierInternal * _priv;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)makeDerivedIdentifier;
- (id)name;

@end
