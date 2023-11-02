
@interface AAMobileMeOfferResponse : AAResponse

@property (nonatomic, readonly) NSString *classicMessage;
@property (nonatomic, readonly) NSString *classicTitle;
@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *title;

- (id)classicMessage;
- (id)classicTitle;
- (id)identifier;
- (id)message;
- (id)title;

@end
