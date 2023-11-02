
@interface WBBookmarkLabel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    bool  _pinned;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (getter=isPinned, nonatomic, readonly) bool pinned;
@property (nonatomic, readonly, copy) NSString *privacyPreservingDescription;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 address:(id)arg2 pinned:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isPinned;
- (id)labelWithAddress:(id)arg1;
- (id)labelWithPinned:(bool)arg1;
- (id)labelWithTitle:(id)arg1;
- (id)privacyPreservingDescription;
- (id)title;

@end
