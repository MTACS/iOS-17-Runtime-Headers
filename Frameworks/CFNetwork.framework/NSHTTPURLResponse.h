
@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal * _httpInternal;
}

@property (readonly) id HTTPPropertyList;
@property (readonly, copy) NSDictionary *allHeaderFields;
@property (nonatomic, readonly) NSData *ams_actionData;
@property (nonatomic, readonly) NSData *ams_actionDataV1;
@property (nonatomic, readonly) NSData *ams_actionDataV1_5;
@property (nonatomic, readonly) NSString *ams_actionName;
@property (nonatomic, readonly) NSString *ams_actionNameV1;
@property (nonatomic, readonly) NSString *ams_actionNameV1_5;
@property (readonly) NSString *ams_fsrAnonymousID;
@property (readonly) NSString *ams_fsrCallbackUrl;
@property (readonly) NSString *ams_fsrData;
@property (readonly) NSString *ams_fsrKeyID;
@property (readonly) NSString *ams_fsrNameSpace;
@property (readonly) NSString *ams_fsrTransactionID;
@property (nonatomic, readonly) bool isFailure;
@property (nonatomic, readonly) bool isSuccess;
@property (nonatomic, readonly) NSString *msv_protocolVersion;
@property (readonly) long long statusCode;
@property (readonly) bool tsu_isSuccess;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (bool)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)HTTPPropertyList;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_peerCertificateChain;
- (id)allHeaderFields;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHTTPPropertyList:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (long long)statusCode;
- (id)valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (long long)_anisetteType;
- (id)ams_actionData;
- (id)ams_actionDataV1;
- (id)ams_actionDataV1_5;
- (id)ams_actionName;
- (id)ams_actionNameV1;
- (id)ams_actionNameV1_5;
- (id)ams_fsrAnonymousID;
- (id)ams_fsrCallbackUrl;
- (id)ams_fsrData;
- (id)ams_fsrKeyID;
- (id)ams_fsrNameSpace;
- (id)ams_fsrTransactionID;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)_ak_dataForEncodedHeaderWithKey:(id)arg1;
- (id)ak_acceptedTermsInfo;
- (id)ak_stringForEncodedHeaderWithKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (bool)_fides_statusIsHTTPOK;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (double)_maxAge;
- (id)getSAPSignature;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

- (unsigned long long)rq_protocolVersion;
- (unsigned long long)rq_timeout;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (id)msv_protocolVersion;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (bool)tsu_isSuccess;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pk_valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

- (id)radio_decompressedDataWithBodyData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (bool)isFailure;
- (bool)isSuccess;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (id)_cacheControlParameters;
- (double)cacheControlMaxAge;
- (bool)hasCacheControl;
- (id)ic_valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)_dateFromExpires;
- (bool)_getCacheControlMaxAge:(double*)arg1;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (double)expirationInterval;
- (id)itunes_expirationDate;
- (double)itunes_expirationInterval;
- (long long)itunes_maxExpectedContentLength;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (bool)tsu_isSuccessStatusCode:(long long)arg1;

- (bool)tsu_isSuccess;

@end
