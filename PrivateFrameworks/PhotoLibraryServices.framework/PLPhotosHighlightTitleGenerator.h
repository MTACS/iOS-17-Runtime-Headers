
@interface PLPhotosHighlightTitleGenerator : NSObject <PLPhotosHighlightTitleGeneratorProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canUseSharingComposition:(short)arg1 forPhotosHighlightFilter:(unsigned short)arg2;
+ (id)titleForHighlight:(id)arg1 filter:(unsigned short)arg2 dateRangeTitleGenerator:(id)arg3 options:(unsigned long long)arg4;

@end
