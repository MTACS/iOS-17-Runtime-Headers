
@interface NSXPCCoder : NSCoder {
    <NSObject> * _userInfo;
}

@property (readonly) NSXPCConnection *connection;
@property (retain) <NSObject> *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_testEncodeAndDecodeInvocation:(id)arg1 interface:(id)arg2;
+ (id)_testEncodeAndDecodeObject:(id)arg1 allowedClass:(Class)arg2;
+ (id)_testEncodeAndDecodeObject:(id)arg1 allowedClasses:(id)arg2;

- (id)connection;
- (void)dealloc;
- (id)decodeXPCObjectForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (bool)requiresSecureCoding;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (struct __CVBuffer { }*)ar_decodePixelBufferForKey:(id)arg1;
- (void)ar_encodePixelBuffer:(struct __CVBuffer { }*)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)wfFileCoder;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (bool)ef_isNSXPCCoder;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)geo_decodeXPCDataForKey:(id)arg1;
- (double)geo_decodeXPCDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (double)geo_decodeXPCDoubleForKey:(id)arg1 success:(bool*)arg2;
- (long long)geo_decodeXPCInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)geo_decodeXPCInt64ForKey:(id)arg1 success:(bool*)arg2;
- (id)geo_decodeXPCStringForKey:(id)arg1;
- (void)geo_encodeXPCData:(id)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCDouble:(double)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCInt64:(long long)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCString:(id)arg1 forKey:(id)arg2;

@end
