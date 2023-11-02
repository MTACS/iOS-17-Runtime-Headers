
@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView {
    NSArray * _constraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _indentationInset;
    <HFStringGenerator> * _message;
    HUTappableTextView * _messageTextView;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } indentationInset;
@property (nonatomic, copy) <HFStringGenerator> *message;
@property (nonatomic, retain) HUTappableTextView *messageTextView;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic) unsigned long long type;

+ (id)defaultAttributesForType:(unsigned long long)arg1;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (bool)_updateViewContent;
- (id)constraints;
- (id)detailTextLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })indentationInset;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)message;
- (id)messageTextView;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setIndentationInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageTextView:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)textLabel;
- (unsigned long long)type;
- (void)updateConstraints;

@end
