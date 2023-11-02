
@interface ASGlobalFrameIdentifier : NSObject <NSCopying, NSSecureCoding> {
    WBSGlobalFrameIdentifier * _coreFrameIdentifier;
}

@property (nonatomic, readonly) NSNumber *webFrameID;
@property (nonatomic, readonly) NSNumber *webPageID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreFrameIdentifier:(id)arg1;
- (id)initWithPageID:(id)arg1 frameID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)webFrameID;
- (id)webPageID;

@end
