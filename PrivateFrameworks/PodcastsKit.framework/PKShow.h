
@interface PKShow : NSObject <NSSecureCoding> {
    void artworkDictionary;
    void descriptionText;
    void feedUrl;
    void podcastUuid;
    void storeId;
    void title;
    void uuid;
}

@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) bool isInLibrary;
@property (nonatomic, readonly) bool isSubscribed;
@property (nonatomic, readonly) PKShowStoreId *storeId;
@property (nonatomic, readonly) NSString *title;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkUrlFor:(struct CGSize { double x1; double x2; })arg1;
- (id)descriptionText;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isInLibrary;
- (bool)isSubscribed;
- (id)storeId;
- (id)title;

@end
