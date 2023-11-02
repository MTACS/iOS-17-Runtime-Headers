
@protocol PKSharingMessageExtensionMessage <NSObject>

@required

- (id)initWithURL:(NSURL *)arg1;
- (bool)isFromMe;
- (bool)isPending;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsPending:(bool)arg1;
- (NSURL *)urlRepresentation;

@optional

- (void)updateWithTemplateLayout:(MSMessageTemplateLayout *)arg1;

@end
