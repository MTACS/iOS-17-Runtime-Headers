
@interface SAMLSignedInfo : SAMLBaseElement

@property (nonatomic, readonly) NSString *canonicalizationMethod;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *references;
@property (nonatomic, readonly) NSString *signatureMethod;
@property (nonatomic, readonly) NSNumber *signatureMethodLength;

+ (id)createElement:(id*)arg1;

- (id)canonicalizationMethod;
- (id)identifier;
- (id)references;
- (id)signatureMethod;
- (id)signatureMethodLength;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)xmlNode:(id*)arg1;

@end
