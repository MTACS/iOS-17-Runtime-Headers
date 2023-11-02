
@interface SearchUIResolvedMediaDestination : NSObject <NSCopying> {
    NSString * _appBundleIdentifier;
    SFCommand * _command;
    SearchUIImage * _image;
    SFMediaMetadata * _mediaMetadata;
    NSString * _title;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) SearchUIImage *image;
@property (nonatomic, retain) SFMediaMetadata *mediaMetadata;
@property (nonatomic, retain) NSString *title;

+ (id)applicationNameForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (id)mediaMetadata;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMediaMetadata:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
