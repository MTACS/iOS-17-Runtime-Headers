
@interface PKTextInputElementsFinder : NSObject {
    bool  __currentlyCollectingViews;
    id /* block */  __finderCompletionHandler;
    long long  __finderState;
    NSMutableSet * __foundElements;
    NSMutableSet * __pendingElementContainerReplies;
    NSArray * __reusableElements;
    bool  _ignoreEditableElements;
    bool  _supportNonEditableElements;
    NSArray * _windowsToSearch;
}

- (void).cxx_destruct;

@end
