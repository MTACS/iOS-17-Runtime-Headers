
@protocol MSPContainerEdit <NSObject>

@required

- (void)ifAddition:(void *)arg1 ifRemoval:(void *)arg2 ifReplacement:(void *)arg3 ifContentUpdate:(void *)arg4 ifReplacedEntirely:(void *)arg5; // needs 5 arg types, found 30: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MSPContainerEditAddition> *, void*, id /* block */, void*, void, id /* block */, <MSPContainerEditRemoval> *, void*, id /* block */, void*, void, id /* block */, <MSPContainerEditReplacement> *, void*, id /* block */, void*, void, id /* block */, <MSPContainerEditContentUpdate> *, void*, id /* block */, void*, void, id /* block */, <MSPContainerEditReplacedEntirely> *, void*

@end
