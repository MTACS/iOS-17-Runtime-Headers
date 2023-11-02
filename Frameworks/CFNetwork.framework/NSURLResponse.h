
@interface NSURLResponse : NSObject <NSCopying, NSSecureCoding> {
    struct URLResponse { int (**x1)(); struct __CFURL {} *x2; struct __CFString {} *x3; struct __CFString {} *x4; long long x5; double x6; double x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; int x10; struct __CFData {} *x11; struct HTTPResponse {} *x12; unsigned char x13; unsigned char x14; } * __cf_resp_data;
    NSURLResponseInternal * _internal;
}

@property (readonly, copy) NSString *MIMEType;
@property (readonly, copy) NSURL *URL;
@property struct URLResponse { int (**x1)(); struct __CFURL {} *x2; struct __CFString {} *x3; struct __CFString {} *x4; long long x5; double x6; double x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; int x10; struct __CFData {} *x11; struct HTTPResponse {} *x12; unsigned char x13; unsigned char x14; }*_cf_resp_data;
@property (nonatomic, readonly) bool _sf_allowedToOverrideContentDispositionAttachment;
@property (nonatomic, readonly) bool _sf_hasAttachmentWithFilename;
@property (readonly, copy) NSDictionary *allHeaderFields;
@property (nonatomic, readonly) NSDictionary *ams_allHeaderFields;
@property (nonatomic, readonly) double ams_expirationInterval;
@property (nonatomic, readonly) long long ams_statusCode;
@property (readonly) long long expectedContentLength;
@property (nonatomic, readonly) bool safari_hasAttachment;
@property (nonatomic, readonly) long long safari_statusCodeGroup;
@property (nonatomic, readonly) bool ssv_isExpiredResponse;
@property (readonly) long long statusCode;
@property (readonly, copy) NSString *suggestedFilename;
@property (readonly, copy) NSString *textEncodingName;
@property (readonly) bool tsu_isHTTPSuccess;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (id)MIMEType;
- (id)URL;
- (struct _CFURLResponse { }*)_CFURLResponse;
- (double)_calculatedExpiration;
- (struct URLResponse { int (**x1)(); struct __CFURL {} *x2; struct __CFString {} *x3; struct __CFString {} *x4; long long x5; double x6; double x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; int x10; struct __CFData {} *x11; struct HTTPResponse {} *x12; unsigned char x13; unsigned char x14; }*)_cf_resp_data;
- (double)_freshnessLifetime;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_initWithInternal:(id)arg1;
- (struct URLResponse { int (**x1)(); struct __CFURL {} *x2; struct __CFString {} *x3; struct __CFString {} *x4; long long x5; double x6; double x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; int x10; struct __CFData {} *x11; struct HTTPResponse {} *x12; unsigned char x13; unsigned char x14; }*)_inner;
- (id)_lastModifiedDate;
- (bool)_mustRevalidate;
- (id)_peerCertificateChain;
- (void)_setExpectedContentLength:(long long)arg1;
- (void)_setMIMEType:(id)arg1;
- (void)_setSSLCertificateContext:(id)arg1;
- (id)allHeaderFields;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4;
- (bool)respondsToSelector:(SEL)arg1;
- (void)set_cf_resp_data:(struct URLResponse { int (**x1)(); struct __CFURL {} *x2; struct __CFString {} *x3; struct __CFString {} *x4; long long x5; double x6; double x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; int x10; struct __CFData {} *x11; struct HTTPResponse {} *x12; unsigned char x13; unsigned char x14; }*)arg1;
- (long long)statusCode;
- (id)suggestedFilename;
- (id)textEncodingName;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)_sf_allowedToOverrideContentDispositionAttachment;
- (bool)_sf_hasAttachmentWithFilename;
- (bool)sf_hasXMLAttachment;
- (bool)sf_shouldDownloadDueToContentDisposition:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (bool)aa_isJSON;
- (bool)aa_isPlist;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (bool)_getCacheControlMaxAge:(double*)arg1;
- (id)ams_allHeaderFields;
- (double)ams_expirationInterval;
- (long long)ams_statusCode;
- (id)ams_valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (bool)_fides_statusIsHTTPOK;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (id)_cacheTime;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (bool)tsu_isHTTPSuccess;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (id)safari_decodeJSONData:(id)arg1 expectingRootClass:(Class)arg2 error:(id*)arg3;
- (bool)safari_hasAttachment;
- (long long)safari_statusCodeGroup;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)ssv_isExpiredResponse;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)itunes_allHeaderFields;
- (long long)itunes_maxExpectedContentLength;
- (long long)itunes_statusCode;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (bool)tsu_isHTTPSuccess;

@end
