
@interface GEOPlaceCollectionPullQuote : NSObject {
    NSString * _htmlDescription;
    NSString * _plainTextDescription;
}

@property (nonatomic, readonly) NSString *htmlDescription;
@property (nonatomic, readonly) NSString *plainTextDescription;

- (void).cxx_destruct;
- (id)htmlDescription;
- (id)initWithPlainText:(id)arg1 htmlText:(id)arg2;
- (id)plainTextDescription;

@end
