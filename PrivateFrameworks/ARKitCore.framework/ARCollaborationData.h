
@interface ARCollaborationData : NSObject <NSSecureCoding> {
    NSUUID * _anchorIdentifier;
    NSSet * _anchors;
    long long  _priority;
    double  _timestamp;
    long long  _version;
    NSData * _vioData;
    long long  _vioDataType;
    unsigned long long  _vioSessionID;
}

@property (nonatomic, retain) NSUUID *anchorIdentifier;
@property (nonatomic, retain) NSSet *anchors;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSData *vioData;
@property (nonatomic, readonly) long long vioDataType;
@property (nonatomic, readonly) unsigned long long vioSessionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorIdentifier;
- (id)anchors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVIOData:(id)arg1 type:(long long)arg2 sessionID:(unsigned long long)arg3;
- (long long)priority;
- (void)setAnchorIdentifier:(id)arg1;
- (void)setAnchors:(id)arg1;
- (double)timestamp;
- (long long)version;
- (id)vioData;
- (long long)vioDataType;
- (unsigned long long)vioSessionID;

@end
