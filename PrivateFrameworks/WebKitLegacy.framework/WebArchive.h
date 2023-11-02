
@interface WebArchive : NSObject <NSCoding, NSCopying> {
    WebArchivePrivate * _private;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) WebResource *mainResource;
@property (nonatomic, readonly, copy) NSArray *subframeArchives;
@property (nonatomic, readonly, copy) NSArray *subresources;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void*)_coreLegacyWebArchive;
- (id)_initWithCoreLegacyWebArchive:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)mainResource;
- (id)subframeArchives;
- (id)subresources;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)bundleForClass;

@end
