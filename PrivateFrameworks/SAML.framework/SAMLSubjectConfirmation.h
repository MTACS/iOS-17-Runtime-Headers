
@interface SAMLSubjectConfirmation : SAMLBaseElement

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *inResponseTo;
@property (nonatomic, readonly) NSString *method;
@property (nonatomic, readonly) SAMLNameId *nameId;
@property (nonatomic, readonly) NSDate *notBefore;
@property (nonatomic, readonly) NSDate *notOnOrAfter;
@property (nonatomic, readonly) NSString *recipient;

+ (id)createElement:(id*)arg1;

- (id)address;
- (id)inResponseTo;
- (id)method;
- (id)nameId;
- (id)notBefore;
- (id)notOnOrAfter;
- (id)recipient;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)xmlNode:(id*)arg1;

@end
