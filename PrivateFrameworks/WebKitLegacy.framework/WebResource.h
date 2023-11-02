
@interface WebResource : NSObject <NSCoding, NSCopying> {
    WebResourcePrivate * _private;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *frameName;
@property (nonatomic, readonly, copy) NSString *textEncodingName;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)MIMEType;
- (id)URL;
- (struct NakedRef<WebCore::ArchiveResource> { struct ArchiveResource {} *x1; })_coreResource;
- (void)_ignoreWhenUnarchiving;
- (id)_initWithCoreResource:(void*)arg1;
- (id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(bool)arg7;
- (id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3;
- (id)_response;
- (id)_stringValue;
- (id)_suggestedFilename;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frameName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)textEncodingName;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)bundleForClass;

@end
