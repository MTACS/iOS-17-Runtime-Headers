
@interface CNCroppedImageDataHelper : NSObject {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

+ (bool)croppedImageDataAvailableForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)contactStore;
- (id)croppedImageDataForContact:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)squareImageData:(id)arg1;

@end
