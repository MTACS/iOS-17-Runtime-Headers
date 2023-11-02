
@protocol MPCQueueControllerBehaviorRestorableImplementation <MPCQueueControllerBehaviorImplementation, NSSecureCoding>

@required

- (bool)containsRestorableContent;
- (NSString *)finalizeStateRestorationWithTargetContentItemID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
