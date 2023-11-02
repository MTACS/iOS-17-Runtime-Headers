
@interface _UINavigationBarTitleRenamerSession : NSObject {
    _UINavigationBarTitleRenamer * _attachedRenamer;
    id  _context;
    LPLinkMetadata * _iconMetadata;
    UIView<_UINavigationBarTitleRenamerContentView> * _renamerContentView;
    NSUUID * _sessionIdentifier;
    NSString * _title;
}

@property (nonatomic, readonly) _UINavigationBarTitleRenamer *attachedRenamer;
@property (nonatomic) id context;
@property (nonatomic, readonly) LPLinkMetadata *iconMetadata;
@property (nonatomic, readonly) UIView<_UINavigationBarTitleRenamerContentView> *renamerContentView;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_sanitizedTitleForText:(id)arg1;
- (void)_textFieldDidEndEditingWithText:(id)arg1;
- (bool)_textFieldShouldEndEditingWithText:(id)arg1;
- (id)_willBeginRenamingWithText:(id)arg1 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attachedRenamer;
- (void)cancelSession;
- (id)context;
- (id)createRenamerContentView;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)existingRenamerContentView;
- (id)iconMetadata;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithSuggestedTitle:(id)arg1;
- (id)initWithSuggestedTitle:(id)arg1 iconMetadata:(id)arg2;
- (id)renamerContentView;
- (void)sessionDidEnd;
- (void)sessionDidStartInRenamer:(id)arg1;
- (id)sessionIdentifier;
- (void)setContext:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
