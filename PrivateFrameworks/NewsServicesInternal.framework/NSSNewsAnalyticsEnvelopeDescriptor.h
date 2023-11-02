
@interface NSSNewsAnalyticsEnvelopeDescriptor : NSObject <NSCopying> {
    int  _contentType;
    int  _contentTypeMinorVersion;
    int  _contentTypePatchVersion;
    int  _contentTypeVersion;
}

@property (nonatomic, readonly) int contentType;
@property (nonatomic, readonly) int contentTypeMinorVersion;
@property (nonatomic, readonly) int contentTypePatchVersion;
@property (nonatomic, readonly) int contentTypeVersion;

- (int)contentType;
- (int)contentTypeMinorVersion;
- (int)contentTypePatchVersion;
- (int)contentTypeVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithContentType:(int)arg1 contentTypeVersion:(int)arg2 contentTypeMinorVersion:(int)arg3 contentTypePatchVersion:(int)arg4;

@end
