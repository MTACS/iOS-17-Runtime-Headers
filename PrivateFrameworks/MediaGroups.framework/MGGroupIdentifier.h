
@interface MGGroupIdentifier : NSObject <MGGroupIdentifierProtocol, MGRemoteQueryDecodable, NSSecureCoding> {
    NSURLComponents * _components;
}

@property (nonatomic, readonly, copy) NSURLComponents *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *normalized;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MediaGroups.framework/MediaGroups

+ (id)groupIdentifierWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLComponents:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)normalized;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

+ (id)rq_instanceFromCoded:(id)arg1;

- (id)rq_coded;

@end
