
@interface TUParticipant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    TUSandboxExtendedURL * _sandboxExtendedImageURL;
}

@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TUSandboxExtendedURL *sandboxExtendedImageURL;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithParticipant:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParticipant:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)sandboxExtendedImageURL;
- (void)setImageURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSandboxExtendedImageURL:(id)arg1;

@end
