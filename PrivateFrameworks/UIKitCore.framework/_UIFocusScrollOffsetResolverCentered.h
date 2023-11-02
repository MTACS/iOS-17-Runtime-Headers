
@interface _UIFocusScrollOffsetResolverCentered : NSObject <_UIFocusScrollOffsetResolver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGPoint { double x1; double x2; })contentOffsetForScrollRequest:(id)arg1;
- (unsigned long long)scrollOffsetResolverType;

@end
