
@interface CPMessageListItemLeadingConfiguration : NSObject <NSSecureCoding> {
    CPImageSet * _leadingImageSet;
    long long  _leadingItem;
    bool  _unread;
}

@property (nonatomic, readonly) UIImage *leadingImage;
@property (nonatomic, retain) CPImageSet *leadingImageSet;
@property (nonatomic, readonly) long long leadingItem;
@property (getter=isUnread, nonatomic, readonly) bool unread;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeadingItem:(long long)arg1 leadingImage:(id)arg2 unread:(bool)arg3;
- (bool)isUnread;
- (id)leadingImage;
- (id)leadingImageSet;
- (long long)leadingItem;
- (void)setLeadingImageSet:(id)arg1;

@end
