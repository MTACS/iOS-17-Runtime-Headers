
@interface UIDictationStreamingOperation : NSBlockOperation {
    long long  _selectionChangeDelta;
}

@property (nonatomic) long long selectionChangeDelta;

- (long long)selectionChangeDelta;
- (void)setSelectionChangeDelta:(long long)arg1;
- (void)start;

@end
