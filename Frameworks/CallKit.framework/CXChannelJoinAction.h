
@interface CXChannelJoinAction : CXChannelAction {
    CXChannelUpdate * _channelUpdate;
}

@property (nonatomic, readonly) CXChannelUpdate *channelUpdate;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (id)channelUpdate;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURL;
- (id)initWithChannelUUID:(id)arg1 name:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setImageURL:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
