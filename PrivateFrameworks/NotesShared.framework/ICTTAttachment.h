
@interface ICTTAttachment : NSObject <ICTTAttachment> {
    NSString * _attachmentIdentifier;
    NSString * _attachmentUTI;
}

@property (nonatomic, copy) NSString *attachmentIdentifier;
@property (nonatomic, copy) NSString *attachmentUTI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long embeddingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (bool)isAttachment:(id)arg1 equalToModelComparable:(id)arg2;
+ (bool)isInlineAttachment:(id)arg1;
+ (bool)typeUTIIsInlineAttachment:(id)arg1;

- (void).cxx_destruct;
- (void)_showWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4 applicationFrameworkContext:(long long)arg5 acceptsViewProvider:(bool)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (id)attachmentIdentifier;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (id)description;
- (id)fileType;
- (id)inlineAttachmentInContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModelComparable:(id)arg1;
- (void)setAttachmentIdentifier:(id)arg1;
- (void)setAttachmentUTI:(id)arg1;
- (long long)standaloneAlignment;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (long long)embeddingType;

@end
