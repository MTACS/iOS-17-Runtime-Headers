
@interface AVTSerializedAvatarRecord : NSObject <NSCopying, NSSecureCoding> {
    <AVTAvatarRecord> * _avatarRecord;
    bool  _isPuppet;
}

@property (nonatomic, readonly, copy) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic) bool isPuppet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avatarRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAvatarRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPuppet;
- (void)setIsPuppet:(bool)arg1;

@end
