
@interface MSVFrameworkDescription : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible> {
    bool  _debug;
    NSString * _name;
    bool  _root;
    NSUUID * _uuid;
    NSString * _version;
}

@property (getter=isDebug, nonatomic, readonly) bool debug;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (getter=isRoot, nonatomic, readonly) bool root;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *version;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 uuid:(id)arg2 version:(id)arg3 root:(bool)arg4 debug:(bool)arg5;
- (bool)isDebug;
- (bool)isRoot;
- (id)name;
- (id)uuid;
- (id)version;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

@end
