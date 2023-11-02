
@interface CXChannelAction : CXAction <CXCopying, CXSecureCoding> {
    NSUUID * _channelUUID;
}

@property (nonatomic, readonly, copy) NSUUID *channelUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (id)channelUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChannelUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
