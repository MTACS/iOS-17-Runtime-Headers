
@interface PPPasteboardLocationItem : NSObject {
    NSDictionary * _addressComponents;
    NSString * _bundleIdentifier;
    NSDate * _createdAt;
    NSString * _text;
}

@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)addressComponents;
- (id)bundleIdentifier;
- (id)createdAt;
- (unsigned long long)memoryFootprintEstimate;
- (void)setAddressComponents:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
