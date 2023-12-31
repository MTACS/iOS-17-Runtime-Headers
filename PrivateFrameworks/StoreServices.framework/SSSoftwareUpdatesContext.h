
@interface SSSoftwareUpdatesContext : NSObject <NSCopying, NSMutableCopying, SSXPCCoding> {
    NSString * _clientIdentifierHeader;
    bool  _forced;
    NSArray * _softwareTypes;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifierHeader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForced, nonatomic, readonly) bool forced;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *softwareTypes;
@property (readonly) Class superclass;

- (id)clientIdentifierHeader;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isForced;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)softwareTypes;

@end
