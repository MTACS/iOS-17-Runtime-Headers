
@protocol SXComponentAnchor <NSObject>

@required

- (long long)originAnchorPosition;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (long long)targetAnchorPosition;
- (NSString *)targetComponentIdentifier;

@end
