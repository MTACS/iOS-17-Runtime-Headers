
@interface PKMemoIconCell : UICollectionViewCell <UITextViewDelegate> {
    <PKMemoIconCellDelegate> * _delegate;
    UILabel * _emojiLabel;
    UITextView * _emojiTextView;
    PKMemoItem * _item;
    struct CGSize { 
        double width; 
        double height; 
    }  _priorBoundsSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKMemoIconCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKMemoItem *item;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)item;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)showEmojiKeyboardIfNeeded;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)updateConfigurationUsingState:(id)arg1;

@end
