
@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction> {
    TSWPChangeSession * _changeSession;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (long long)delta;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 changeSession:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertedRange;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(void*)arg3 replaceBlock:(id /* block */)arg4;
- (unsigned long long)targetCharIndex;

@end
