
@interface CNSNaPSuggestionsGalleryName : NSObject {
    NSString * _family;
    NSString * _given;
}

@property (nonatomic, retain) NSString *family;
@property (nonatomic, retain) NSString *given;

- (void).cxx_destruct;
- (id)family;
- (id)given;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2;
- (void)setFamily:(id)arg1;
- (void)setGiven:(id)arg1;

@end
