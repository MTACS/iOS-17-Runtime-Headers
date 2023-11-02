
@interface ICTK2TodoTextAttachment : ICTextAttachment {
    ICTTTodo * _todo;
}

@property (nonatomic, readonly) ICTTTodo *todo;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (id)initWithTodo:(id)arg1;
- (id)todo;
- (id)viewIdentifier;

@end
