
@protocol TPPageControllerDelegate <NSObject>

@required

- (TPDocumentRoot *)documentRoot;
- (long long)pageViewState;

@end
