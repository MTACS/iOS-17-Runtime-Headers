
@interface NSTextContentManager : NSObject <NSSecureCoding, NSTextElementProvider> {
    bool  _automaticallySynchronizesTextLayoutManagers;
    bool  _automaticallySynchronizesToBackingStore;
    <NSTextContentManagerDelegate> * _delegate;
    NSMutableArray * _editHistory;
    unsigned long long  _maximumNumberOfUncachedElements;
    NSTextLayoutManager * _primaryTextLayoutManager;
    NSMutableArray * _textLayoutManagers;
    _Atomic unsigned long long  _transactionStack;
}

@property bool automaticallySynchronizesTextLayoutManagers;
@property bool automaticallySynchronizesToBackingStore;
@property (readonly, copy) NSString *debugDescription;
@property <NSTextContentManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSTextRange *documentRange;
@property (readonly) bool hasEditingTransaction;
@property (readonly) unsigned long long hash;
@property unsigned long long maximumNumberOfUncachedElements;
@property (retain) NSTextLayoutManager *primaryTextLayoutManager;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *textLayoutManagers;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_decrementTransactionStack;
- (void)_incrementTransactionStack;
- (void)addTextLayoutManager:(id)arg1;
- (bool)automaticallySynchronizesTextLayoutManagers;
- (bool)automaticallySynchronizesToBackingStore;
- (bool)containsExtraLineFragment;
- (void)dealloc;
- (id)delegate;
- (id)documentRange;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerateTextElementsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (bool)hasEditingTransaction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCountableDataSource;
- (id)locationFromLocation:(id)arg1 withOffset:(long long)arg2;
- (unsigned long long)maximumNumberOfUncachedElements;
- (long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
- (void)performEditingTransactionUsingBlock:(id /* block */)arg1;
- (void)performEditingTransactionWithBlock:(id /* block */)arg1;
- (id)primaryTextLayoutManager;
- (void)recordEditActionInRange:(id)arg1 newTextRange:(id)arg2;
- (void)removeTextLayoutManager:(id)arg1;
- (void)replaceContentsInRange:(id)arg1 withTextElements:(id)arg2;
- (void)setAutomaticallySynchronizesTextLayoutManagers:(bool)arg1;
- (void)setAutomaticallySynchronizesToBackingStore:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNumberOfUncachedElements:(unsigned long long)arg1;
- (void)setPrimaryTextLayoutManager:(id)arg1;
- (void)synchronizeTextLayoutManagers:(id /* block */)arg1;
- (void)synchronizeToBackingStore:(id /* block */)arg1;
- (id)textElementsForRange:(id)arg1;
- (id)textLayoutManagers;

// Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeFromTextRange_emk:(id)arg1;

@end
