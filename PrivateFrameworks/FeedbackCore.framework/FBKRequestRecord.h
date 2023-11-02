
@interface FBKRequestRecord : DEDRequestRecord

@property (readonly) NSAttributedString *attrRequestBody;
@property (readonly) NSAttributedString *attrRequestHeader;
@property (readonly) NSAttributedString *attrResponseBody;
@property (readonly) NSAttributedString *attrResponseHeader;
@property (readonly) UIColor *displayColor;

- (id)attrRequestBody;
- (id)attrRequestHeader;
- (id)attrResponseBody;
- (id)attrResponseHeader;
- (id)attributedStringAttributes;
- (id)description;
- (id)displayColor;

@end
