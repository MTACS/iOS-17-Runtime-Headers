
@interface HPSSiriAssetDownloadStatusCoderContainer : NSObject <NSSecureCoding> {
    void status;
    void uuidstr;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
