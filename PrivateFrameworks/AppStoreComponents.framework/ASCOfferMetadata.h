
@interface ASCOfferMetadata : NSObject <NSCopying, NSSecureCoding>

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isIcon, nonatomic, readonly) bool icon;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (getter=isProgress, nonatomic, readonly) bool progress;
@property (getter=isText, nonatomic, readonly) bool text;
@property (getter=isViewInAppStore, nonatomic, readonly) bool viewInAppStore;

+ (id)emptyMetadata;
+ (id)iconMetadataWithImageName:(id)arg1 animationName:(id)arg2;
+ (id)indeterminateProgressMetadata;
+ (id)placeholderMetadata;
+ (id)progressMetadataWithValue:(double)arg1;
+ (id)redownloadMetadata;
+ (bool)supportsSecureCoding;
+ (id)textMetadataWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)viewInAppStoreMetadata;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isIcon;
- (bool)isPlaceholder;
- (bool)isProgress;
- (bool)isText;
- (bool)isViewInAppStore;

@end
