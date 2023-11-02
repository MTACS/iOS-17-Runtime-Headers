
@interface ICTK2TextLayoutManagerDelegate : NSObject <NSTextLayoutManagerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)textLayoutManager:(id)arg1 textLayoutFragmentForLocation:(id)arg2 inTextElement:(id)arg3;

@end
